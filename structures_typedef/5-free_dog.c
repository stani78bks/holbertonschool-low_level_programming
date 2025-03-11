#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog structure
 * @d: Pointer to the dog structure to free
 *
 * Description: This function frees the memory allocated for a dog,
 * including its name and owner strings, then frees the structure itself.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
