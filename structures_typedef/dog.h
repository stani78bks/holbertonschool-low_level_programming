#ifndef DOG_H
#define DOG_H

#include <stddef.h> /* Pour NULL */

/**
 * struct dog - A dog structure
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Typedef pour struct dog */
typedef struct dog dog_t;

/* Déclaration de la fonction init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

