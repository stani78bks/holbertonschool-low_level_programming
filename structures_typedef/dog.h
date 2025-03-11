#ifndef DOG_H
#define DOG_H

#include <stddef.h> /* To use NULL */

/* Define the struct dog */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Define the typedef for dog_t */
typedef struct dog dog_t;

/* Declare the init_dog function */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

