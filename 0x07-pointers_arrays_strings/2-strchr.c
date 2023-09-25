#include "main.h"

/**
 * *_strchr - Entry point.
 * @s: string to search in.
 * @c: character to be located.
 * Return: ALways 0 (Success).
 */

char *_strchr(char *s, char c)
{
	int o;

	for (o = 0; s[o] >= '\0'; o++)
	{
		if (s[o] == c)
			return (s + o);
	}

	return (NULL);
}
