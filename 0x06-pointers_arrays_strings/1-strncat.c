#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strncat - Entry point
 *
 * @dest : the input that we deal with it
 * @src : the input that we deal with it
 * @n :the input of the function
 * Return:  (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int ln = 0;
	int ln2 = 0;
	int i = 0;

	while (dest[ln] != '\0')
		ln++;
	while ((src[ln2] != '\0') && (n > ln2))
		ln2++;

	for (i = 0; i < ln2; i++)
	{
		dest[ln + i] = src[i];
	}

	dest[ln + ln2] = '\0';

	return (dest);
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
