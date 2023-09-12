#include "main.h"
/**
 * times_table - prints the 9 times table
 * Description: prints the 9 times table
 * Return: void
 */
void times_table(void)
{
	int rows, cols, product, tens, ones;


	for (rows = 0; rows <= 9; rows++)
	{
	for (cols = 0; cols <= 9; cols++)
	{
	product = rows * cols;
	tens = product / 10;
	ones = product % 10;
	if (cols == 0)
	{
	_putchar('0');
	}
	else if (product < 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(ones + '0');
	}
	else
	{


		_putchar(',');
		_putchar(' ');
		_putchar(tens + '0');
		_putchar(ones + '0');
	}
	}
	_putchar('\n');
	}
}
