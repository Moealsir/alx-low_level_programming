#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: 1st string
 * @src: 3nd string
 * @n: int parameter
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d;
	int s;

	i = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	s = 0;
	while (s < n && src[s] != '\0')
	{
	dest[d] = src[s];
	d++;
	s++;
	}
	dest[d] = '\0';
	return (dest);
}

