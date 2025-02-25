#include "main.h"

/**
 * print_line - Dessine une ligne droite dans le terminal.
 * @n: Nombre de fois où le caractère '_' doit être imprimé.
 *
 * Description: Si n est inférieur ou égal à 0,
 * seule une nouvelle ligne est imprimée.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

