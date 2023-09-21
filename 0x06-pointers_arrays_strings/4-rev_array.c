#include "main.h"
/**
 * reverse_array - the nume function
 * @a: array input of the function
 * @n:input of the function
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int it;
	int res;

	for (it = 0; it < n--; it++)
	{
		res = a[it];
		a[it] = a[n];
		a[n] = res;
	}
}

