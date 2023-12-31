<div align='center'>

# :sweat_drops: 42SP Warm-up 
[![mmaschio's 42 stats](https://badge42.vercel.app/api/v2/clkblnlu7001608l83ar9hs4v/stats?cursusId=60&coalitionId=undefined)](https://github.com/matheusPavoski/badge42)

<div align='left'>

### :swimmer:Piscine_Reloaded
<blockquote>You have been graded 100 on Piscine_Reloaded:

ex00: OK | ex01: OK | ex02: OK | ex03: OK | ex04: OK | ex05: OK | ex06: OK | ex07: OK | ex08: OK | ex09: OK | ex10: OK | ex11: OK | ex12: OK | ex13: OK | ex14: OK | ex15: OK | ex16: OK | ex17: OK | ex18: OK | ex19: OK | ex20: OK | ex21: OK | ex22: OK | ex23: OK | ex24: OK | ex25: OK | ex26: OK | ex27: OK </blockquote>

[![mmaschio's 42 Piscine_Reloaded Score](https://badge42.vercel.app/api/v2/clkblnlu7001608l83ar9hs4v/project/3159549)](https://github.com/JaeSeoKim/badge42)

</div>
</div>

As soon as we become cadets of 42SP, we go through two weeks of warm-up before starting the cursus, and this is the first list we must submit. It consists of a series of exercises that help reinforce the fundamentals of the C language, which were covered during the Piscine immersion (the selective process to enter 42). Some examples of these fundamental concepts would be: loops, functions, pointers, and structs.

Below, you will find a table with the name of each exercise submission file and a brief explanation. It's important to mention that the first six exercises are not related to the C language, but instead, they are related to shell commands.

|File Name | Explanation|
|----------|------------|
|exo.tar   |In this exercise, we received an image of a terminal with the `ls -l` command, which listed some files and directories. The goal of this exercise was to recreate the contents of that folder in our terminal. To do this, we had to use commands such as `chmod` to change the file permissions; we used the `touch` command with the `-t` flag to modify the file's access and modification times, allowing us to set custom timestamps for the files; we used the `truncate` command with the `-s` flag to adjust the sizes of our files; we used the `ln` command to create hard links and the same command with the `-s` flag to create soft links. After that, we learned how to use the `tar -cf exo.tar *` command to compress our files and directories into a folder and submit them for evaluation.|
|z|The concept of this exercise was quite simple. We needed to create a file named `z` and inside this file, we had to include the uppercase letter `Z`. To solve this exercise, I created a file named `z` using the `touch` command and then opened this file with the text editor Vim using the command `vim z`. With the editor open, I wrote the uppercase `Z`, saved, and exited. Now, when we run the `cat` command on our lowercase file `z`, the content of this file will be displayed in our terminal, showing the uppercase `Z`.|
|clean|In this exercise, we were supposed to create a file named `clean`. Inside this file, we should put a command line that searches for all files in the current directory and its subdirectories with names ending in `~` or names that start and end with `#`. The command line should display and delete all found files.To solve this problem, I created the file named `clean`, and the first thing I did was to put the header `#!/bin/sh`. Then, I skipped a line and used the following command: `find . -type f -name "*~" -o -name "#*#" -exec rm {} ;`. The `find .` command is responsible for searching in the current directory and all subdirectories; the `-type f` flag specifies that we are looking for files. The flag `-name "~"` specifies that we are searching for files ending in `~`. The `-o` flag is a logical operator used to combine the expression `-name "~"` with `-name "#*#"` which specifies the files that start and end with `#`. Finally, I executed the command `-exec rm {}` to perform the deletion action (rm) on the found files. The braces `{}` are placeholders representing the found files.|
|find_sh.sh|The goal of this exercise is to write a command line that searches for all file names ending with `.sh` in the current directory and all its subdirectories. The command should only display the names of the files without the `.sh` extension.To solve this problem, i also started with the `find` command. Take a look at the command itself: `find . -type f -name "*.sh" -exec basename {} .sh \;`. Just like in the `clean` file, we also used the `-type f` flag to specify that we are only looking for files, and we used the `-name "*.sh"` flag to specify that we are looking for files with this extension. Then, we used the `-exec basename {} .sh\;` command to specify that we want to print the base name of each file in the terminal without the `.sh` extension.
|MAC.sh|In this exercise, the idea was to write a command line that displays the MAC addresses of my computer, where each address should be followed by a line break. The Media Access Control address is a 48-bit serial number used to identify the Ethernet or Wi-Fi network device globally. It is the base address of all network devices, with only one address existing for each produced card. To solve this problem, I used three different commands: `ifconfig` to display the configurations of active interfaces; `grep ether` to search for strings containing `ether` in the name (which is associated with MAC addresses of machines); followed by the `awk '{print $2}'` command, which is used to manipulate the text output and show only what is found in the second column (in this case, the MAC addresses). It is interesting to mention that to redirect the output of one command to another, we use the pipeline symbol.|
|"\?$*'MaRViN'*$?\"|


