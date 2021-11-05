#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - prints a character
 *
 * @ap: list with character to be printed
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints an integer
 *
 * @ap: list with integer to be printed
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints a float number
 *
 * @ap: list with float to print
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints a string
 *
 * @ap: list with string to be printed
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s)
		printf("%s", s);
	else
		printf("(nil)");
}

/**
 * print_all - prints anything (mini printf)
 *
 * @format: list of types of arguments
 *
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *separator = "";
	unsigned int i, j = 0;
	op_t op[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(ap, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (op[i].op != NULL)
		{
			if (op[i].op[0] == format[j])
			{
				printf("%s", separator);
				op[i].f(ap);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(ap);
	printf("\n");
}
