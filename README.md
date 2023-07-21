# :sweat_drops: 42SP Warm-up 
[![mmaschio's 42 stats](https://badge42.vercel.app/api/v2/clkblnlu7001608l83ar9hs4v/stats?cursusId=60&coalitionId=undefined)](https://github.com/JaeSeoKim/badge42)

### :swimmer:Piscine_Reloaded
<blockquote>You have been graded 100 on Piscine_Reloaded:

ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: OK | ex06: OK | ex07: OK | ex08: OK | ex09: OK | ex10: OK | ex11: OK | ex12: OK | ex13: OK | ex14: OK | ex15: OK | ex16: OK | ex17: OK | ex18: OK | ex19: OK | ex20: OK | ex21: OK | ex22: OK | ex23: OK | ex24: OK | ex25: OK | ex26: OK | ex27: OK </blockquote>

[![mmaschio's 42 Piscine_Reloaded Score](https://badge42.vercel.app/api/v2/clkblnlu7001608l83ar9hs4v/project/3159549)](https://github.com/JaeSeoKim/badge42)

As soon as we become cadets of 42SP, we go through two weeks of warm-up before starting the cursus, and this is the first list we must submit. It consists of a series of exercises that help reinforce the fundamentals of the C language, which were covered during the Piscine immersion (the selective process to enter 42). Some examples of these fundamental concepts would be: loops, functions, pointers, and structs.

Below, you will find a table with the name of each exercise submission file and a brief explanation. It's important to mention that the first five exercises are not related to the C language, but instead, they are related to shell commands.

|File Name | Explanation|
|----------|------------|
|exo.tar   |In this exercise, we received an image of a terminal with the `ls -l` command, which listed some files and directories. The goal of this exercise was to recreate the contents of that folder in our terminal. To do this, we had to use commands such as `chmod` to change the file permissions; we used the `touch` command with the `-t` flag to modify the file's access and modification times, allowing us to set custom timestamps for the files; we used the `truncate` command with the `-s` flag to adjust the sizes of our files; we used the `ln` command to create hard links and the same command with the `-s` flag to create soft links. After that, we learned how to use the `tar -cf exo.tar *` command to compress our files and directories into a folder and submit them for evaluation.|
|z|The concept of this exercise was quite simple. We needed to create a file named `z` and inside this file, we had to include the uppercase letter `Z`. To solve this exercise, I created a file named `z` using the `touch` command and then opened this file with the text editor Vim using the command `vim z`. With the editor open, I wrote the uppercase `Z`, saved, and exited. Now, when we run the `cat` command on our lowercase file `z`, the content of this file will be displayed in our terminal, showing the uppercase `Z`.|
|clean|In this exercise, we were supposed to create a file named `clean`. Inside this file, we should put a command line that searches for all files in the current directory and its subdirectories with names ending in `~` or names that start and end with `#`. The command line should display and delete all found files.To solve this problem, I created the file named `clean`, and the first thing I did was to put the header `#!/bin/sh`. Then, I skipped a line and used the following command: `find . -type f -name "*~" -o -name "#*#" -exec rm {} ;`. The `find .` command is responsible for searching in the current directory and all subdirectories; the `-type f` flag specifies that we are looking for files. The flag `-name "~"` specifies that we are searching for files ending in `~`. The `-o` flag is a logical operator used to combine the expression `-name "~"` with `-name "#*#"` which specifies the files that start and end with `#`. Finally, I executed the command `-exec rm {}` to perform the deletion action (rm) on the found files. The braces `{}` are placeholders representing the found files.|


