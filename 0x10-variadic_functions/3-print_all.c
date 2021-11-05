#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *separator = "";
	unsigned int i, j = 0;
	op_t op[] = {
		{"c", print_char},
		{"i", print_integer},
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

/**
 * print_char - prints a char
 * @ap: va_list
 * Return: void
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_integer - prints an int
 *@ap: va_list
 *Return: void
 */
void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - print a floater
 * @ap: va_list
 * Return: void
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - print a string
 * @ap: va_list
 * Return: void
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
