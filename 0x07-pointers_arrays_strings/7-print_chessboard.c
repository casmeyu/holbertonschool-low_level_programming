#include "main.h"
/**
 * print_chessboard - this functions takes a 2d array as input
 * and prints the chessboard
 *
 * @a: position of pieces
 */
void print_chessboard(char (*a)[8])
{
	int c, r;

	for (c = 0; c < 8; c++)
	{
		for (r = 0; r < 8; r++)
		{
			_putchar(a[c][r]);
		}
		_putchar('\n');

	}
}
