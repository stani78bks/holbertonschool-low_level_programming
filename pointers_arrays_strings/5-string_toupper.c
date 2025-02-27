Write a function that changes all lowercase letters of a string to uppercase.

    Prototype: char *string_toupper(char *);

julien@ubuntu:~/$ cat 5-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-string_toupper.c -o 5-string_toupper
julien@ubuntu:~/$ ./5-string_toupper 
LOOK UP!
LOOK UP!
julien@ubuntu:~/$ 

Repo:

    GitHub repository: holbertonschool-low_level_programming
    Directory: pointers_arrays_strings
    File: 5-string_toupper.c


