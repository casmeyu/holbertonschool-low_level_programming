#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *separator = "";
	unsigned int pos_op, pos_f = 0;
	op_t op[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(ap, format);

	while (!format && format[pos_f])
	{
		pos_op = 0;
		while (op[pos_op].op != NULL)
		{
			if (op[pos_op].op[0] == format[pos_f])
			{
				printf("%s", separator);
				op[pos_op].f(ap);
				separator = ", ";
			}
			pos_op++;
		}
		pos_f++;
	}
	va_end(ap);
	printf("\n");
}

/**
 * print_char - prints a char
 * @ap: va_list
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_integer - prints an integer
 *
 *@ap: va_list
 */
void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - print a float number
 *
 * @ap: va_list
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints a string
 * 
 * @ap: va_list
 */

void print_string(va_list ap)
{
	char *s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
