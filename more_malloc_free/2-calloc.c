#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: Pointer to allocated memory, or NULL if failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return (ptr);
}
