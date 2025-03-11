#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Crée un nouveau chien en allouant dynamiquement la mémoire
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 *
 * Return: Pointeur vers la nouvelle structure dog_t, NULL si échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *new_name, *new_owner;
	int name_len, owner_len;

	/* Vérification des paramètres */
	if (name == NULL || owner == NULL)
		return (NULL);

	/* Allocation mémoire pour la structure dog */
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	/* Allocation et copie de name */
	name_len = strlen(name) + 1;
	new_name = malloc(name_len);
	if (new_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(new_name, name);

	/* Allocation et copie de owner */
	owner_len = strlen(owner) + 1;
	new_owner = malloc(owner_len);
	if (new_owner == NULL)
	{
		free(new_name);
		free(dog);
		return (NULL);
	}
	strcpy(new_owner, owner);

	/* Assignation des valeurs */
	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;

	return (dog);
}
