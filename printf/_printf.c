#include "main.h"
/**
 * _printf - prints a formated string
 *
 * @format: string to check
 *
 * Return: number of printed bytes
 */
int _printf(const char *format,...)
{
	int ltotal = 0, lformat = 0, pos_arg = 0;
	int pos_f, pos_op;
	va_list ap;

	va_start(ap);

	for (pos_f = 0; format[pos_f]; pos_f++)
	{
		if (format[pos_f] == '%')
		{
			pos_f++;
			if (format[pos_f] == '%')
			{
				lformat++;
				continue;
			}
			if (!format[pos_f] || format[pos_f] == ' ')
				exit(98);
		}
	}

}
