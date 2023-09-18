#include "main.h"

/**
 * swap_int - swap a value and b value
 *
 * @a: int parameter
 * @b: int parameter
 * @temp: parameter to swap values
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
