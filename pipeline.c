/*
** EPITECH PROJECT, 2023
** -Code-Pipe-master
** File description:
** pipeline
*/

// Include necessary libraries
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

// Function to execute commands in a pipeline
void generic_pipe(char **commands[], int num_commands)
{
    int fd[2];
    // Duplicate the standard input file descriptor
    int in_fd = // -> code here
    pid_t pid;

    for (int i = 0; i < num_commands - 1; i++) {
        // Create a pipe and store its file descriptors in fd
        // -> code here
        // Create a new process by forking
        // -> code here


        if (pid == 0) {
            // Redirect standard input to in_fd
            // -> code here
            // Close the old input file descriptor
            // -> code here

            // Redirect standard output to the write end of the pipe
            // -> code here
            // Close the read end of the pipe
            // -> code here
            // Close the write end of the pipe
            // -> code here

            // Execute the current command
            // -> code here
            exit(0);
        } else {
            close(in_fd);
            in_fd = fd[0];
            // Close the write end of the pipe
            // -> code here
            // Wait for the child process to finish
            // -> code here
        }
    }

    // Redirect standard input to in_fd
    // -> code here
    // Close the input file descriptor
    // -> code here

    // Execute the last command in the pipeline
    // -> code here
}

int main()
{
    char *ls[] = {"ls", NULL};
    char *cat[] = {"cat", "-e", NULL};
    char *grep[] = {"grep", "m", NULL};

    // Store the commands in an array
    // -> code here

    pid_t pid = fork();
    if (pid == 0) {
        // Execute the commands in a pipeline
        // -> code here
    } else {
        // Wait for the child process to finish
        // -> code here
    }
    return 0;
}
