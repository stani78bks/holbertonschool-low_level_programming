#include <stdio.h>

/**
 * main - Prints the program name.
 * @argc: Number of command line arguments (unused)
 * @argv: Array of command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Évite l'avertissement de paramètre non utilisé */
	printf("%s\n", argv[0]);

	return (0);
}

