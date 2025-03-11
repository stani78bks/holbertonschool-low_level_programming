#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the elements of a struct dog.
 * @d: Pointer to the struct dog to print.
 *
 * If any element is NULL, print "(nil)" instead.
 * If the struct itself is NULL, print nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	/* Print the name, age, and owner with conditions */
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

