#include "variadic_functions.h"

/**
 * sum_them_all - sum parameters
 * @n: num
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(add, n);
	for (i = 0; i < n; i++)
		sum += va_arg(add, int);
	va_end(add);
	return (sum);
}

