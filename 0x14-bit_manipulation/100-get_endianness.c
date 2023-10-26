#include "main.h"

/**
 * get_endianness - get indless
 * Return: void
*/

int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	if (*byte == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
