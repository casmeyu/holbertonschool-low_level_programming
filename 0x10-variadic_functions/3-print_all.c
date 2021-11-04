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
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int pos_ops = 0, pos_for = 0;
	op_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format[pos_for])
	{
		while (ops[pos_ops].op)
		{
			if (ops[pos_ops].op[0] == format[pos_for])
			{
				ops[pos_ops].f(ap);
				if (ops[pos_ops + 1].op)
					printf(", ");
			}
			pos_ops++;

		}
		pos_ops = 0;
		pos_for++;
	}
	printf("\n");

}


