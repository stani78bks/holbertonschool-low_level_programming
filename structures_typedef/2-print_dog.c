#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog.
 * @d: Pointer to the dog structure.
 *
 * Description: If an element is NULL, prints (nil) instead.
 * If d is NULL, the function does nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	/* Vérifier et afficher chaque champ en respectant les règles */
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}

