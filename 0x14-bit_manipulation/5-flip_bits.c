#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: num
 * @m: num
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = n ^ m;
	int i = 0;

	while (val > 0)
	{
		i += val & 1;
		val >>= 1;
	}
	return (i);
}
