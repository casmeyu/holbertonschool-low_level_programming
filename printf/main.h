#ifndef MAIN_H
#define MAin_H

#include <stdarg.h>
#include <stdlib.h>

int _printf(cont char *format, ...);

typedef struct 
{
	char op;
	char (*f)(va_list ap);
}

char *print_string(va_list ap);
char *print_char(va_list ap);
char *print_digit(va_list ap);

#endif
