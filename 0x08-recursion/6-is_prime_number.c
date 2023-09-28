#include "main.h"

/**
 * compare - compare between i && n
 * @n: num
 * @i: int
 * Return: 1 or 0
 */
int compare(int n, int i)
{
	if (n == i)
		return (1);

	else if (n % i == 0)
		return (0);

	return (compare(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: num
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (compare(n, 2));
}

