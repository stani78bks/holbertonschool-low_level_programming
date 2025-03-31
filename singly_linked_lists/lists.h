#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - Structure d'un nœud de liste chaînée
 * @str: Chaîne de caractères (dynamique ou statique)
 * @len: Longueur de la chaîne de caractères
 * @next: Pointeur vers le nœud suivant
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif /* LISTS_H */

