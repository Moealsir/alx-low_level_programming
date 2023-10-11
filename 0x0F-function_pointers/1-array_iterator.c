#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter 
 * @array - array
 * @size - size of array
 * @action - function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int s;

	if (array && action)
		for (s = 0; s < size; s++)
			action(array[s]);
}
