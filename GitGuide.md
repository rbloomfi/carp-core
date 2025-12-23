# Git Guide for Goobers
# 🥋
By the end of this guide, 
- you should be a **lethal weapon at version control, and save yourself from lost code (and time)**
- you should understand the nature of the **branch**, and what it means to "force push main"
- you should have the skills to **submit your changes to open-source projects and work asynchronously** amongst other keyboard warriors over the internet

disclaimer: if you have any git wizardry, corrections/opinions, or want to submit other git resources feel free to contribute. if you are looking for more, start with ```man git (optional subcommand)``` and get greppin'

## round 1 (ง'̀-'́)ง 
### git init

initializes a new *repository* - by default this will also create:
- .git/ (don't worry about it, internal git stuff)
- An empty **worktree** (git slang for the local files you can currently see)
- A **branch** called ``main/master``
  -  <details>
      <summary>why are there 2 names?</summary>
      originally called master, renamed to main. Both are commonly used, and commonly mixed up (git defaults to master, github defaults to main, ChatGPT picks whatever it feels like)
    </details>
 
```
[I] ~[1]►git init slop       21:15
```

### git status
- this will tell you your current branch, and whether your worktree has changes that are not backed up by any commit or branch
```
[I] ~/slop►git status                                           (master) 21:15
On branch master

No commits yet
```
### git add (files)
- adds files (or changes you made to existing files) to the **staging area**

- 🎬 the staging area is like a green room / being "on deck" - it's what you're about to commit to your current branch
```
[I] ~/slop►touch good_code.c                                 (master) 21:22
[I] ~/slop►git add .                                       (master|?) 21:22
[I] ~/slop►git status                                      (master|●) 21:23
On branch master

No commits yet

Changes to be committed:
  (use "git rm --cached <file>..." to unstage)
	new file:   good_code.c
```


### git commit -m "your description"
- creates a **commit**, with a unique **commit hash** so you can reference it later
- appends this commit to the current branch - *but only your **local** copy of the branch*
 > ### 🗿 **it's a good idea to run ```add & commit``` early and often**
>
> especially if you know the changes you made so far are currently working - it's easier to jump through commits than sort through a commit with 100 new lines and refactored code

```
[I] ~/slop►git commit -m "implemented matrix mul"          (master|●) 21:24
[master (root-commit) e2e6fca] implemented matrix mul
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 good_code.c

```

### git push
- updates the **remote**'s copy of your current branch to match your local branch
- the remote is usually GitHub, but you can use GitLab, or your own/your company's self-hosted Git remote server
- if you are working with other people concurrently, you can imagine there may be **conflicts** if you both make changes. Thats where branches, merges, and pull requests come in...
- Other commands for working with **remote**:
  - git fetch: querys the remote to tell you if there are new changes
  - git pull: fetches changes, attempts to merge them into your local code

  > ### 🗿 **it's a good idea to run ```fetch & pull``` early and often**
  > especially if you know changes have been made by other people since you last made changes

## round 2 (ง'̀-'́)ง 

### git branch 🌿
- displays existing branches 
- you can create a new branch with ```git branch mynewbranch``` or ```git switch -c mynewbranch```
  - there are a lot of git commands that have duplicates - it's an "old growth" sort of program
- branches are variants of the existing repo, and exist within the repo
```

[I] ~/slop►git branch                                        (master) 21:30
* master
```




### git switch 𓀓𓀝
- switch/create branches
- -c == create branch and switch to it
- in git terms, "switching" means changing your *worktree* to the latest commit on some branch
```
[I] ~/slop►git switch -c adding_new_function                 (master) 21:31
Switched to a new branch 'adding_new_function'
[I] ~/slop►git branch                           (adding_new_function) 21:31
* adding_new_function
  master
[I] ~/slop►                                     (adding_new_function) 21:31
```

> ### WARNING: beware 👹 git checkout 
> 
> just don't use ```git checkout``` - it's an old command they keep around for back-compat. If you see ```git checkout (something)```, there's a very good chance it can be done instead with:
> - git switch
> - or git restore


### git log 🪵
- I omitted some commands, but while I was on the new branch (adding_new_function), I made some changes and committed them to the new branch
- Now, we have made 2 commits, both of them contribute to the current state of the adding_new_function branch
- And you can see that the first commit is labelled as part of master, but the second commit is associated with adding_new_function - specifically, it is the **HEAD** - the most recent commit in your worktree's branch
- git log is also helpful for seeing what other people have done on branches while you were gone. Assuming they make good commit messages, you should have a decent idea of the high level changes. If you want to see exactly what was changed, you can always view the ```git diff``` from the commit you last worked on, to the newest commit on the branch (```git diff 123abc..main```, assuming you worked on the commit that has a hash starting with 123abc)
```
[I] ~/slop►git log                                     (adding_new_function) 21:38
commit ff2453df2d14aef8b68fe5c0b11fcbd1e56ec101 (HEAD -> adding_new_function)
Author: d <dsandall@calpoly.edu>
Date:   Sun Nov 16 21:37:38 2025 -0800

    implemented some other func

commit e2e6fca7a4d87781994946e8b4a77a3288f6b937 (master)
Author: d <dsandall@calpoly.edu>
Date:   Sun Nov 16 21:24:56 2025 -0800

    implemented matrix mul
```




### git restore
- lets say, for example, now you accidentally delete both files, when you meant to only delete the old one (the poorly named good_code.c)
- if you have previously committed that file, you can **restore any changes in your worktree** (defaults to the copy from HEAD)
- this works for not just deletions, but any changes to the file(s)
```
[I] ~/slop►rm function_code.c                          (adding_new_function) 21:44
[I] ~/slop►rm good_code.c                           (adding_new_function|💩) 21:44
[I] ~/slop►git status                               (adding_new_function|💩) 21:44
On branch adding_new_function
Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
	deleted:    function_code.c
	deleted:    good_code.c

no changes added to commit (use "git add" and/or "git commit -a")
[I] ~/slop►git restore function_code.c              (adding_new_function|💩) 21:45
[I] ~/slop►git status                               (adding_new_function|💩) 21:45
On branch adding_new_function
Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
	deleted:    good_code.c

no changes added to commit (use "git add" and/or "git commit -a")
```




### git diff
- alright, now you've refactored some code, and need to get a good idea of what actually changed. Instead of blindly pushing all your changes (including comments in random files, debug statements you no longer need, temp files... etc), lets look at what changed since last commit
- git diff shows you line by line what changed, denoted by a +/- (color coded if your shell supports it)
- git diff can also be used to compare changes between 2 commits, between 2 branches, for only certain files, etc.
```
[I] ~/slop►git diff                                 (adding_new_function|💩) 21:51
diff --git a/function_code.c b/function_code.c
index 82a5457..0b84d41 100644
--- a/function_code.c
+++ b/function_code.c
@@ -1 +1 @@
-void old_function() {}
+int new_function(int a) { return a + 1; }
```







## round 3 - going back to main branch
*♫ who says you can't go home? ♫*

 ### git merge (best for simple changes that do not conflict)

im running out of breath explaining in exhaustive detail, and you're going to have to do your own research anyway. so heres an example. you'll figure it out, i believe in you!

the master has become the student 🏅


``` 
git switch main
git merge my_cool_feature_branch 
```

three things could now happen:

- (boring option 1) there are no changes on main since you first branched your cool feature. no problem! now you can delete the branch (assuming there are no further changes that should be kept out of main) 
- (boring option 2) there WERE changes on main, but they were simple - git can figure it out. same as above.
- **there WERE changes on main, and they require human intervention!**
  - there are many, many ways to solve this... chat is your friend (and may get you in trouble!) 
  - but instead, if you suspect conflicts, just start by doing the right thing!

### alternatives to git merge:
#### github pull requests (my preferred method):
  - pro: keeps everyone in the loop
  - pro: you don't have to do the merge, you can defer to someone else
  - how to do it? commit everything to your branch, then go to the github website and submit a PR from the GUI. (google it)
    - you can also do it from the CLI, using the github-cli package
  - how does it work? 
    - you select someone with a knowledge of all the ongoings of the project to review your code, and they make sure your changes mesh nicely with everything else that has changed on the project so far
    - or, you approve & merge it yourself 
  - #### **why tho?**
    - #### it leverages github's social media-ness to package all your branches changes into a nice forum thread!
      - it gives you a place to summarize all your overarching thoughts on the branch/feature, instead of cramming them into the README or source code comments
      - it also gives other people a chance to make comments/questions, or submit little changes
    - whether you merge yourself or let others handle it, the PR feature nicely keeps a log of all the major revisions to main, packaged into coarser chunks than individual commits. 
      - the big benefit of this is that your commits stay atomic, but your features are grouped together and clear-cut





# Bonus Round:
 ### git stash / git stash pop
- often, you will make some changes in the worktree, that are probably good, but not good enough to commit. you could commit them, then rewind your commit, or something else, but why do that when you have git stash?
- **git stash will push your non-staged worktree changes to a stack that is internal to git**
- **the stash is shared across all local branches**
- git stash pop will pop your changes back off the stack
- you can do a lot of stuff with this, but i find it most useful for quickly saving stuff when you want to poke around in another branch or commit. The other big use of it is when you think you are on one branch, make changes, and realize you want it somewhere else. stash, switch, pop, boom
- you can also name your stashes, since the stack method can get overwhelming if you overuse it


# terms

- origin - the remote repo
- HEAD - the most current commit on your local worktree
- upstream
  - this term is kind of overloaded
  - could refer to a project that your repo is based on (forked from)
  - or could refer to the branch/commit that your branch branched from
- .gitignore 
  - this file lists the files that git ... ignores... 
  - there can be many, but typically only one in the project root


> ## License
> 
> This project is licensed under the **GNU General Public License v3.0 (GPLv3)**.
> 
> You may copy, distribute, and modify this software as long as you track changes/dates
> in source files and license your derivatives under the GPLv3.  
> All derivative work **must also be open-sourced under GPLv3**.
> 
> See the full license text in the **LICENSE** file or online at:  
> https://www.gnu.org/licenses/gpl-3.0.en.html


> -*Dylan Joaquin Sandall*
