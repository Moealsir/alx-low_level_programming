#include "main.h"

/**
 * _memcpy - copies memory area from src into dest
 * @dest: first
 * @src: second
 * @n: number of copy times
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int inc;

	for (inc = 0; inc < n; inc++)
	{
		dest[inc] = src[inc];
	}

	return (dest);
}
