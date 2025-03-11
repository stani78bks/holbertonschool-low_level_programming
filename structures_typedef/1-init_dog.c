#include "dog.h"
#include <stddef.h>  /* Include this for NULL */

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: The dog struct to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 *
 * Return: Nothing. The struct dog is initialized directly.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

