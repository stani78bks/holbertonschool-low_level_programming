#include "main.h"
/**
 * _islower - Entry Point
 *@c: character to be verified
 * Return: Always 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
