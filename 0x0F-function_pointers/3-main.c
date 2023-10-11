#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: integer
 * @argv: value
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int (*func)(int, int);

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}

	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
