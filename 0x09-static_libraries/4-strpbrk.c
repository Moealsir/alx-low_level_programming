#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string 1
 * @accept: string 2
 *
 * Return: p (success).
 */

char *_strpbrk(char *s, char *accept)
{
	int inc1;
	int inc2;
	char *p;

	inc1 = 0;
	while (s[inc1] != '\0')
	{
		inc2 = 0;
		while (accept[inc2] != '\0')
		{
			if (accept[inc2] == s[inc1])
			{
				p = &s[inc1];
				return (p);
			}
			inc2++;
		}
		inc1++;
	}

	return (0);
}
