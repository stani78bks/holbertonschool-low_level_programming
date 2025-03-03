#include "main.h"
#include <stddef.h> /* for NULL */

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes to look for in the string
 * 
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s) /* loop through each character of string s */
    {
        char *a = accept;

        while (*a) /* loop through each character of accept */
        {
            if (*s == *a) /* check if there's a match */
                return s; /* return pointer to the matching byte in s */
            a++;
        }
        s++;
    }
    return NULL; /* return NULL if no match is found */
}

