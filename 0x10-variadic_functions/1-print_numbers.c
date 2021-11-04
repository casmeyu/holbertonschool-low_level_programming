#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - print numbers followed by separator and finish in new line
 *
 * @separator: separator between numbers
 * @n: ammount of numbers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator)
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
