#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings with a separator bewteen up to n strings
 *
 * @separator: separator between strings
 * @n: number of strings to print
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char*);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (separator && (i < (n - 1)))
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
