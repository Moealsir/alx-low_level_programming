#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the rows
 * Return: nothing!
*/

void print_chessboard(char (*a)[8])
{
	int in, jn;

	for (in = 0; in < 8; in++)
	{
		for (jn = 0; jn < 8; jn++)
		{
			_putchar(a[in][jn]);
		}
		_putchar('\n');
	}
}
