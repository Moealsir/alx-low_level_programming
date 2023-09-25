#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Entry point
 *
 * @a: array
 *
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int f, m;

	for (f = 0; f < 8; f++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar (a[f][m]);
		}
		_putchar('\n');
	}
}
