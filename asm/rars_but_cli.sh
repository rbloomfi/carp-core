#!/bin/sh
# Usage: ./rars_hex.sh prog.s
# Author: ChatGippity
# Cost: 1e99 gigajoules, forwarded to taxpayers

### parse arguments, usage
set -e
if [ -z "$1" ]; then
  echo "usage: $0 file.asm" >&2
  exit 1
fi
in="$1"

### Create temp files for assembly process
### (asm source -> obj -> ELF -> binary -> format binary as hex)
obj="$(mktemp /tmp/rarshex_obj.XXXXXX)"
elf="$(mktemp /tmp/rarshex_elf.XXXXXX)"
bin="$(mktemp /tmp/rarshex_bin.XXXXXX)"

### setup trap, called on success or error
### (cleans up intermediary junk)
cleanup() {
  rm -f "$obj" "$elf" "$bin"
}
trap cleanup EXIT

### Assemble
# - specify microarchitecture
# - specify Application Binary Interface:
#     Ints Longs (&) Pointers == 32 bits long
riscv32-elf-as -march=rv32i -mabi=ilp32 "$in" -o "$obj"

### Link single OBJ into ELF
# - Link at 0x0 (mimics RARS behavior)
# - suppress entry warning (might be a better solution, idk)
riscv32-elf-ld \
  -Ttext=0x0 \
  -e 0 \
  "$obj" \
  -o "$elf"

### Extract .text → binary
# - loses any .data content
# - with reversed byte order (TODO: is this a quirk of the otter? should we be following a more "typical" format?)
riscv32-elf-objcopy \
  --reverse-bytes=4 \
  -O binary \
  --only-section=.text \
  "$elf" "$bin"

# Output as RARS .text hex
xxd -p -c 4 "$bin"
