#include <stdio.h>
/**
 * swap - this functions takes two pointers and waps them
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
