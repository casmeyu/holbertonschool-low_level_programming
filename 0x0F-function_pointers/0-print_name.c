#include "function_pointers.h"
/**
 * print_name: calls another functions and passes a name
 *
 * @name: name to print
 * @f: function to pass name to
 */
void print_name(char *name, void(*f)(char *))
{
	if (f)
		f(name);
}
