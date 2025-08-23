#include <stdio.h>
#include <string.h>

const char *PROJECT_NAME = "My GIT Learning Journey";

void welcome(){printf("Welcome to my \"%s\"!\n", PROJECT_NAME);}
void goodbye(){printf("Thank you for using my \"%s\"!\n", PROJECT_NAME);}

int main(){
    welcome();
        
    goodbye();
    return 0;
}
