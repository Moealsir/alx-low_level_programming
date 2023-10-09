#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min num
 * @max: max num
 * Return: 0 or array
 */

int *array_range(int min, int max)
{
	int *a;
	int i, i2;

	if (min > max)
		return (0);
	a = (int *) malloc(sizeof(int) * (max - min + 1));
	if (a == 0)
		return (0);
	for (i = min, i2 = 0; i = max; i++, i2++)
		a[i2] = i;
	return (a);
}
