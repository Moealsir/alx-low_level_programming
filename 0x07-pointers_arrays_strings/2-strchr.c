#include "main.h"

/**
 * *_strchr - Entry point.
 * @s: string to search in.
 * @c: character to be located.
 * Return: ALways 0 (Success).
 */

char *_strchr(char *s, char c)
{
	int in;

	for (in = 0; s[in] >= '\0'; in++)
	{
		if (s[in] == c)
			return (s + in);
	}

	return (NULL);
}
