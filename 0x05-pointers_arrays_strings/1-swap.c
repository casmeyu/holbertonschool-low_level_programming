#include <stdio.h>
/**
 * swap_int - this functions takes two pointers and waps their values
 *
 * @a: pointer a
 * @b: pointer b
 */
void swap_int(int *a, int *b)
{
	int old_a;

	old_a = *a;
	*a = *b;
	*b = old_a;
}
