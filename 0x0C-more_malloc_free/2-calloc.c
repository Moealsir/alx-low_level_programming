#include "main.h"

/**
 * *_memset - fill memory with a constant byte
 * @s: pointer
 * @b: the constant byte
 * @n: max bytes to use
 * Return: ptr
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array
 * @size:size of each elemnt
 * Return: apinter
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(nmemb * size);

	if (m == 0)
		return (NULL);

	_memset(m, 0, nmemb * size);

	return (m);
}
