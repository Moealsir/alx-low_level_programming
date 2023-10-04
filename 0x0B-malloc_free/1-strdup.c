#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0 or s
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i = 0;

	if (str == 0)
		return (0);
	while (str[i] != '\0')
		i++;
	s = malloc(sizeof(char) * (i + 1));
	if (s == 0)
		return (0);

	else
	{
		for (i = 0; str[i] != '\0'; i++)
			s[i] = str[i];
		s[i] = '\0';
		return (s);
	}
}
