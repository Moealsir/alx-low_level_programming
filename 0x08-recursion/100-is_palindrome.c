#include "main.h"

/**
 * is_palindrome - check if s string is equal left to right that right to left
 * @s: string
 * Return: 0 or 1 if s is palindrome world
 */

int is_palindrome(char *s)
{
	int i, j;

	if (s[0] == '\0' || s[1] == '\0')
		return (1);

	i = 0;
	j = strlen(s) - 1;
	while (i < j)
	{
		if (s[i] != s[j])
			return (0);
		i++;
		j--;
	}
	return (is_palindrome(s + 1, s + j - 1));
}

