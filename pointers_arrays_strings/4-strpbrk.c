#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Recherche la première occurrence dans s d'un des caractères
 *            présents dans accept.
 * @s: Chaîne principale à analyser.
 * @accept: Ensemble de caractères à rechercher dans s.
 *
 * Return: Pointeur vers le premier caractère trouvé dans s,
 *         ou NULL si aucun caractère ne correspond.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}

