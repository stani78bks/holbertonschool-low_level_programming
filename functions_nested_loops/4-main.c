#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char c;
c = 'A';
printf("%c: %d\n", c, _isalpha(c));
c = 'a';
printf("%c: %d\n", c, _isalpha(c));
c = '1';
printf("%c: %d\n", c, _isalpha(c));
return (0);
}
