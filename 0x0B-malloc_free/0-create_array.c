#include "main.h"

/**
 * char *create_array - creates an array of chars
 * @size: int
 * @c: char
 * Return: NULL if size is 0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int num;
	char *ar;

	if (size == 0)
		return (NULL);

	ar = (char *)malloc(sizeof(char) * size);
	if (ar == 0)
		return (NULL);

	for (num = 0; num < size; num++)
		ar[num] = c;

	return (ar);
}
