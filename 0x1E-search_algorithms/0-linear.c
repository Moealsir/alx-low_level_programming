#include "search_algos.h"

/**
 * linear_search - a Function that ...
 * @array: Description of array.
 * @size: Description of size.
 * @value: Description of value.
 * Return: Description of the return value.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		return (-1);
	}
}
