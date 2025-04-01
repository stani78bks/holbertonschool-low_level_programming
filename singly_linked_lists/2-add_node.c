#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste list_t
 * @head: Double pointeur vers le premier nœud de la liste
 * @str: Chaîne de caractères à dupliquer
 *
 * Return: Adresse du nouvel élément, ou NULL en cas d'échec
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	/* Dupliquer la chaîne de caractères */
	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);

	/* Calculer la longueur de la chaîne */
	while (str[len])
		len++;

	/* Allouer de la mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	/* Initialiser le nouveau nœud */
	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;

	/* Déplacer le head vers le nouveau nœud */
	*head = new_node;

	return (new_node);
}

