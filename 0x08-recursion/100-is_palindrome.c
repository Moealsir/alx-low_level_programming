#include "main.h"

/**
 * is_palindrome - check if s string is equal left to right that right to left
 * @s: string
 * Return: 0 or 1 if s is palindrome world
 */

int is_palindrome(char *s)
{
	int i, j;

	i = 0;
	j = strlen(s) - 1;
	while (i < j)
	{
		if (s[i] != s[j])
			return (0);
		i++;
		j--;
	}
	return (1);
}

