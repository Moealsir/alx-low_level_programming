#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: ,
 * @n: num
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i = 0;

	if (separator == NULL)
		separator = "";
	va_start(nums, n);
	while (i < n)
	{
		if (i == (n - 1))
			printf("%d", va_arg(nums, int));
		else
			printf("%d%s", va_arg(nums, int), separator);
		i++;
	}
	printf("\n");
	va_end(nums);
}

