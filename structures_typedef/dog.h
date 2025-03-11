#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure to represent a dog
 * @name: Name of the dog (type char*)
 * @age: Age of the dog (type float)
 * @owner: Owner of the dog (type char*)
 */
struct dog
{
char *name;   /* Name of the dog */
float age;    /* Age of the dog */
char *owner;  /* Owner of the dog */
};

/* Creating a typedef for the struct */
typedef struct dog dog_t;

#endif /* DOG_H */

