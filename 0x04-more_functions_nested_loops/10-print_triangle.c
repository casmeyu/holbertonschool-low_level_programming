#include "main.h"
/**
 * print_triangle - prints a triangle based on the incoming in
 *
 * @size: int size of the triangle
 */
void print_triangle(int size)
{
	int lines, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lines = 0; lines < size; lines++)
		{
			for (c = 1; c < (size - lines); c++)
			{
				_putchar(' ');
			}
			for (c--; c < size; c++)
			{
				_putchar('#');
			}


			_putchar('\n');
		}
	}
}
