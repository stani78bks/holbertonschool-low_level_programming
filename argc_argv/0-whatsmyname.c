#include <stdio.h>
#include "main.h"

/**
 * main - Prints the program's name followed by a new line
 * @argc: Number of command-line arguments (unused)
 * @argv: Array of command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
    (void)argc;  /* On ignore argc car on ne l'utilise pas */
    printf("%s\n", argv[0]);
    return (0);
}

