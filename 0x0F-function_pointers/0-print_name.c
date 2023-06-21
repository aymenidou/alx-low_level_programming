#include "function_pointers.h"

/**
 * print_name - entry point
 * @name: input string
 * @f: pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
