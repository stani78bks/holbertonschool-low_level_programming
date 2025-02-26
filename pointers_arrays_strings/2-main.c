#include "main.h"
#include <stdio.h>

/**
 * main - Vérifie le fonctionnement de la fonction _strlen
 *
 * Return: Toujours 0 (succès)
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
