#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcmp - Entry point
 *
 * @s1 : the input that we deal with it
 * @s2 : the input that we deal with it
 *
 * Return:  (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int ln = 0;



	while ((s1[ln] != '\0') && (s2[ln] != '\0'))
	{

		if (s1[ln] != s2[ln])
		{
			return (s1[ln] - s2[ln]);
		}
		ln++;
	}
	return (0);




}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
