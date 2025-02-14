#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
char lettre = 'z';
while (lettre >= 'a')
{
putchar(lettre);
lettre--;
}
putchar('\n');
return (0);
}
