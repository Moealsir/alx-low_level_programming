#include "function_pointers.h"

/**
 * array_iterator - execute given function on a given array
 * @array: array
 * @size: array size
 * @action: the function to executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int s;

	if (array && action)
		for (s = 0; s < size; s++)
			action(array[s]);
}
