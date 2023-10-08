#include "main.h"

/**
 * *string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 * Return: m
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int x, y, s1len, s2len;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 == "";
	for (s1len = 0; s1[s1len] != '\0'; s1len)
		;
	for (s2len = 0; s2[s2len] != '\0'; s2len)
		;

	m = malloc(s1len + n + 1);
	if (m == NULL)
		return (NULL);
	for (x = 0; s1[x] != '\0'; x++)
		m[x] = s1[x];
	for (y = 0; y < n; n++)
		{
		m[x] = s[y];
		y++;
		}

	return (m);
}
