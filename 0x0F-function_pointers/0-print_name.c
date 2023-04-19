#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: input name
 * @f: input function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
