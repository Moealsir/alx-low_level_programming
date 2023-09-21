#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat - concatenates src string to dest string
 *
 * @dest: string one
 * @src: string two
 *
 * Return:  (Success)
 */
char *_strcat(char *dest, char *src)
{
	int l1 = 0;
	int l2 = 0;
	int i = 0;
	char *res;

	while (dest[l1] != '\0')
		l1++;
	while (src[l2] != '\0')
		l22++;

	res = (char *)malloc(l1 + l2 + 1);

	for (i = 0; i < l1; i++)
		res[i] = dest[i];

	for (i = 0; i < l2; i++)
	{
		res[l1 + i] = src[i];
		dest[l1 + i] = src[i];
	}

	res[l1 + l2] = '\0';
	dest[l1 + l2] = '\0';

	return (res);
}
