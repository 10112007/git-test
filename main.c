/*
    ?[Date: 20-08-2025]
    ?This is a Code Repo to track my Git learning journey!
*/
#include <stdio.h>
#include <string.h>
#include <unistd.h>

const char *PROJECT_NAME = "My GIT Learning Journey";

void welcome(){printf("Welcome to my \"%s\"!\n", PROJECT_NAME);}
void goodbye(){printf("Thank you for using my \"%s\"!\n", PROJECT_NAME);}

int main(){
    welcome();
    sleep(1); // Simulate some processing time
    //Here is the list of all functions of unistd.h
    printf("1. sleep(seconds): Suspend execution for a specified time.\n");
    printf("2. usleep(microseconds): Suspend execution for a specified time in microseconds.\n");
    printf("3. getpid(): Get the process ID of the calling process.\n");
    printf("4. fork(): Create a new process by duplicating the calling process.\n");
    printf("5. exec(): Replace the current process image with a new process image.\n");
    printf("6. pipe(): Create a unidirectional data channel that can be used for interprocess communication.\n");
    printf("7. getppid(): Get the parent process ID of the calling process.\n");
    printf("8. ttyname(fd): Get the name of the terminal associated with a file descriptor.\n");
    sleep(1); // Simulate some processing time
    write(STDOUT_FILENO, "Hello, World!\n", 14);
    goodbye();
    return 0;
}
