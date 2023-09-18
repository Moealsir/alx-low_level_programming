#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: string parameter
 *
 * Return: Always 0.
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;

	return (count);
}
