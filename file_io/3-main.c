#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]);

/**
 * main - Entry point to simulate cp (copy) from one file to another
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, otherwise error code
 */
int main(int argc, char *argv[])
{
	char *file_from = "test_source.txt";
	char *file_to = "test_dest.txt";
	FILE *src;
	FILE *dest;
	char ch;

	src = fopen(file_from, "w");
	if (src == NULL)
	{
		perror("Failed to create source file");
		return (1);
	}
	fprintf(src, "This is a test file.\nIt has multiple lines.\n");
	fclose(src);

	/* Simulate running ./cp file_from file_to */
	{
		char *args[] = {"cp", file_from, file_to};

		extern int main_cp(int, char **);
		main_cp(3, args);
	}

	printf("Contents of '%s':\n", file_to);

	dest = fopen(file_to, "r");

	if (dest == NULL)
	{
		perror("Failed to open destination file");
		return (1);
	}

	while ((ch = fgetc(dest)) != EOF)
		putchar(ch);
	fclose(dest);

	return (0);
}

