#include "main.h"

/**
 * main - Fonction principale pour tester print_triangle.
 *
 * Return: Toujours 0.
 */
int main(void)
{
    print_triangle(0);   /* Tester avec 0 - Devrait juste imprimer un \n. */
    print_triangle(-10); /* Tester avec un nombre négatif - Devrait imprimer \n. */
    print_triangle(3);   /* Tester avec 3 - Triangle de petite taille. */
    print_triangle(9);   /* Tester avec 9 - Un triangle de taille moyenne. */
    print_triangle(98);  /* Tester avec 98 - Un triangle de grande taille. */
    return (0);
}

