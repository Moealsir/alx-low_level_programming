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
	unsigned int x = 0, y = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	if (n > y)
		n = y;

	m = (char *) malloc(sizeof(char) * x + (n + 1));
	if (m == 0)
		return (0);

	for (x = 0; s1[x] != '\0'; x++)
		m[x] = s1[x];
	for (y = 0; y < n; y++, x++)
		m[x] = s2[y];
	m[x] = '\0';
	return (m);


}
