#include "main.h"

/**
 * power - checks if an integer is the square root of a number
 * @n: num
 * @i: int
 * Return: int
 */
int power(int n, int i)
{
	if (n == i * i)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (power(n, i + 1));
}
/**
 * _sqrt_recursion - returns an int
 * @n: num
 * Return: num
 */
int _sqrt_recursion(int n)
{
	return (power(n, 1));
}
