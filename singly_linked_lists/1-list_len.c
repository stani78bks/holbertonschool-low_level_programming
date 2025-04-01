#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Retourne le nombre d'éléments dans une liste list_t
 * @h: Pointeur vers la tête de la liste chaînée
 *
 * Return: Nombre de nœuds dans la liste
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

