#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcmp - Entry point
 *
 * @s1 : 1st string
 * @s2 : 2nd string
 *
 * Return:  (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int l = 0;



	while ((s1[l] != '\0') && (s2[l] != '\0'))
	{

		if (s1[l] != s2[l])
		{
			return (s1[l] - s2[l]);
		}
		l++;
	}
	return (0);




}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
