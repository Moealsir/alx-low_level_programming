#include "main.h"

/**
 * swap_int - swap a value and b value
 *
 * @a: int parameter 1
 * @b: int parameter 2
 *
 * Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
