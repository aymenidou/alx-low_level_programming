#include "function_pointers.h"

/**
 * array_iterator - executes a function given as param per element
 * @array: input array
 * @size: size of array
 * @action: pointer to function to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int idx;

if (array != NULL && action != NULL)
{
for (idx = 0; idx < size; idx++)
{
action(array[idx]);
}
}
}
