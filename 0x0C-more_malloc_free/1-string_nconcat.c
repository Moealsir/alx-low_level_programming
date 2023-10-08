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
	unsigned int x, y, s1l, s2l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1l = 0; s1[s1l] != '\0'; s1l++)
		;
	for (s2l = 0; s2[s2l] != '\0'; s2l++)
		;

	m = malloc(s1l + n + 1);
	if (m == NULL)
		return (NULL);

	for (x = 0;s1[x] != '\0'; x++)
		m[x] = s1[x];

	for (y = 0; y < n; y++)
	{
		m[x] = s2[y];
		y++;
	}

	m[x] = '\0';
	return (m);
}
