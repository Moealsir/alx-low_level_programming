#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strncpy - Entry point
 *
 * @dest : the input that we deal with it
 * @src : the input that we deal with it
 * @n :the input of the function
 * Return:  (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ln = 0;
	int ln2 = 0;
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);

}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
