#include "main.h"
#include <stddef.h>

/**
 * _strstr - Trouve la première occurrence de la sous-chaîne needle
 *           dans la chaîne haystack.
 * @haystack: La chaîne principale où chercher.
 * @needle: La sous-chaîne à localiser.
 *
 * Return: Pointeur vers le début de la sous-chaîne trouvée,
 *         ou NULL si elle n'est pas présente.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}

