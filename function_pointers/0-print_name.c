#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to be printed.
 * @f: A function pointer to a function that prints a name.
 *
 * Description: This function takes a name and a function pointer,
 * and it calls the function to print the name. If either name or f
 * is NULL, the function does nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
