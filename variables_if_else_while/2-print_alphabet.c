#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
char lettre;
for (lettre = 'a' ; lettre <= 'z'; lettre++)
{
putchar(lettre);
}
putchar('\n');
return (0);
}
