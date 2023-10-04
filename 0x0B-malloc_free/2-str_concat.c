#include "main.h"
/**
 * str_concat - concatenates two strings.
 * @s1: string1
 * @s2: string2
 * Return: 0 or s3
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i1 = 0, i2 = 0;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[i1] != '\0')
		i1++;
	while (s2[i2] != '\0')
		i2++;
	i2 += i1;
	s3 = malloc(sizeof(char) * (i2 + 1));
	if (s3 == 0)
		return (0);
	for (i1 = 0; s1[i1] != '\0'; i1++)
		s3[i1] = s1[i1];
	for (i2 = 0; s2[i2] != '\0'; i1++, i2++)
		s3[i1] = s2[i2];
	s3[i1] = '\0';
	return (s3);
}
