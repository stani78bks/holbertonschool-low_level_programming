#include "main.h"
#include <stddef.h> /* pour NULL */

/**
 * _strpbrk - cherche un caractère dans une chaîne parmi un ensemble de caractères
 * @s: chaîne à rechercher
 * @accept: ensemble de caractères à rechercher dans la chaîne
 *
 * Retour: un pointeur vers le premier caractère dans s qui correspond à l'un des caractères dans accept,
 *         ou NULL si aucun caractère ne correspond.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s) /* boucle à travers chaque caractère de la chaîne s */
    {
        char *a = accept;

        while (*a) /* boucle à travers chaque caractère de accept */
        {
            if (*s == *a) /* vérifier si un caractère correspond */
            {
                return (s); /* retourner le pointeur vers le caractère correspondant dans s */
            }
            a++;
        }
        s++;
    }

    return (NULL); /* retourner NULL si aucun caractère ne correspond */
}

