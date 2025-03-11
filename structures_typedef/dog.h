#ifndef DOG_H
#define DOG_H

#include <stddef.h>

/**
 * struct dog - Structure représentant un chien
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Propriétaire du chien
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

/* Prototypes des fonctions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner); /* Ajout de la déclaration */
void free_dog(dog_t *d);

#endif /* DOG_H */

