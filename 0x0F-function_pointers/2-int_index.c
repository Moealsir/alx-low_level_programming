#include "function_pointers.h"

/**
 * int_index - searches for an int in an array of the typr int
 * @array: array
 * @size: array size
 * @cmp: function
 * Return: index of the element or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		do {
			if (cmp(array[i]))
				return (i);
			i++;
		} while (i < size);
	}
	return (-1);
}
