#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: num
 * @index: index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	else
		return ((n >> index) & 1);
}
