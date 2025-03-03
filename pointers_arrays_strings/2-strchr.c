#include "main.h"
#include <stddef.h> /* Pour NULL */

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search in.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of c in s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0') /* Gérer le cas où c est '\0' */
		return (s);

	return (NULL);
}

