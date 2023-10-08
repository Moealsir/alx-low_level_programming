#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: unsigned integer
 * Return: pointer or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *tst = malloc(b);

	if (tst == NULL)
		exit(98);

	return (tst);
}
