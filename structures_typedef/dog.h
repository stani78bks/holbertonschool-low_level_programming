#ifndef DOG_H
#define DOG_H

#include <stddef.h> /* Pour éviter l'erreur avec NULL */

/**
 * struct dog - A dog structure
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Description: This structure holds information about a dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* Typedef for struct dog */
typedef struct dog dog_t;

/* Prototypes des fonctions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

