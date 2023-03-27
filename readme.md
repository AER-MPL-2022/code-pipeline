# Command Pipeline Exercise :wrench:

This exercise focuses on a program that creates a pipeline between multiple commands using pipes and file descriptor duplications in C. You will work with partially completed code, fill in the missing parts, and implement a new set of commands in a pipeline.

## Objective :dart:

Complete the missing parts of the code and modify it to implement a new pipeline with different commands. Optimize the code if you find any improvements.

## Instructions :memo:

1. Understand the given partial code and its functionality.

2. Complete the missing parts based on your understanding of pipes, file descriptor duplications, and process management in C.

3. Implement a new set of commands in a pipeline. Choose any set of commands that can be used in a pipeline and update the number of commands accordingly.

4. Test your program to ensure the new pipeline is functional.

5. Apply any improvements or optimizations you find.

## How to Execute the Program :computer:

Compile and execute the program using the following commands in your terminal:

`gcc -o pipeline pipeline.c`
./pipeline

## Expected Results :mag:

The program should execute the commands in a pipeline, with each command's output serving as input for the next one. The final result should be displayed in the terminal.

For example, with the given commands ("ls", "cat -e", and "grep m"), the program should list the files in the current directory, pass the output to "cat -e" which adds a '$' at the end of each line, and then pass the output to "grep m" which filters the lines containing the letter 'm'.

Good luck! :four_leaf_clover:
