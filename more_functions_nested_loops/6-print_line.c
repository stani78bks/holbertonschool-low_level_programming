#include "main.h"

/**
 * print_line - dessine une ligne droite dans le terminal
 * @n: le nombre de fois où le caractère '_' doit être imprimé
 */
void print_line(int n)
{
    if (n <= 0)
    {
        _putchar('\n');  // Si n est inférieur ou égal à 0, on imprime juste un saut de ligne
    }
    else
    {
       
