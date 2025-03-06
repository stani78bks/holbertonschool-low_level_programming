#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments (unused).
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Évite l'avertissement de paramètre non utilisé */
	printf("%d\n", argc - 1);

	return (0);
}
