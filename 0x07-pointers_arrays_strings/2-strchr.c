#include "main.h"

/**
 * *_strchr - Entry point.
 * @s: string to search in.
 * @c: character to be located.
 * Return: ALways 0 (Success).
 */

char *_strchr(char *s, char c)
{
	int inc;

	for (inc = 0; s[inc] != '\0'; inc++)
	{
		if (s[inc] == c)
			return (&s[inc]);
	}

	return (0);
}
