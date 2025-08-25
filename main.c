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
    printf("Demonstrating usleep(500000): Sleeping for 0.5 seconds...\n");
    printf("This is the main branch!\n");
    
    usleep(500000); // Sleep for 500,000 microseconds (0.5 seconds)
    printf("Woke up after 0.5 seconds!\n");
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
    printf("9. write(fd, buf, count): Write data to a file descriptor.\n");
    ssize_t bytes_written = write(STDOUT_FILENO, "Hello, World!\n", 14);
    if (bytes_written == -1) {
        perror("write");
    }
    goodbye();
    return 0;
}
