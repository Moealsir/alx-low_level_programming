#include "main.h"

/**
 * _memset - fills s with constant b value n times
 * @s: pointer
 * @b: constant value
 * @n: maximum number of filling
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int inc; /**increase untill n reach 0*/

	for (inc = 0; n > 0; inc++)
		s[inc] = b;

	return (s);
}
