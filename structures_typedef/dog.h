#ifndef DOG_H
#define DOG_H

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
char *name;  /* The dog's name */
float age;   /* The dog's age */
char *owner; /* The dog's owner */
};

/* Typedef for struct dog */
typedef struct dog dog_t;

#endif /* DOG_H */

