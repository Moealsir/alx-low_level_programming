#include "main.h"

/**
 * _strspn - gets hte length
 * @s: string s
 * @accept: string accept
 * Return: inc1
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int inc1;
	unsigned int inc2;

	for (inc1 = 0; s[inc1] != '\0'; inc1++)
	{
		for (inc2 = 0; accept[inc2] != s[inc1]; inc2++)
		{
			if (accept[inc2] == '\0')
				return (inc1);
		}
	}
	return (inc1);
}
