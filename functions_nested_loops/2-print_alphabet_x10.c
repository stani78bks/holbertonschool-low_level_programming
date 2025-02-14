#include "main.h"

/**
 * print_alphabet_x10 - This function prints the alphabet in lowercase
 *
 * Return: Always 0 (Sucess)
 */

void print_alphabet_x10(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 10; i++)
{
int j = 0;
while (alphabet[j] != '\0')
{
_putchar(alphabet[j]);
j++;
}
_putchar('\n');
}
}
