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
c = 'a';
printf("%c: %d\n", c, _islower(c));
c = 'A';
printf("%c: %d\n", c, _islower(c));
return (0);
}
