#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * create_node - Creates a new list_t node.
 * @str: String to duplicate and assign to the new node.
 *
 * Return: Pointer to the new node, or NULL if it fails.
 */
list_t *create_node(const char *str)
{
	list_t *new_node;
	char *dup_str;
	unsigned int len = 0;

	if (!str)
		return (NULL);

	dup_str = strdup(str);
	if (!dup_str)
		return (NULL);

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(dup_str);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = NULL;

	return (new_node);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to duplicate and add to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (!head)
		return (NULL);

	new_node = create_node(str);
	if (!new_node)
		return (NULL);

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}

