#include <stdio.h>
#include <string.h>

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

