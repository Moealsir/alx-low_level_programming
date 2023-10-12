#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: type
 */
void print_all(const char * const format, ...)
{
	va_list var;
	unsigned int ind = 0;
	int i;
	char *s, c;
	float f;

	va_start(var, format);
	while (format != NULL && format[ind] != '\0')
	{
		switch (format[ind++])
		{
			case 'i':
				i = va_arg(var, int);
				printf("%d", i);
				break;
			case 's':
				s = va_arg(var, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			case 'c':
				c = (char) va_arg(var, int);
				printf("%c", c);
				break;
			case 'f':
				f = va_arg(var, double);
				printf("%f", f);
				break;
			default:
				continue;
		}
		if (format[ind] != '\0')
			printf(", ");
	}
	va_end(var);
	printf("\n");
}

