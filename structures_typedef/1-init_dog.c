#include <stddef.h>  /* Pour NULL */
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: Pointer to the dog structure to be initialized.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of the dog's owner.
 *
 * Description: This function initializes the members of the dog structure
 * with the values provided as arguments.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL) /* Vérifie que le pointeur d existe */
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

