#include <stdio.h>
/**
 * main - this is the main function for print_comb3
 *
 * Return: the number 0
 *
 */
int main(void)
{
	int d1, d2;

	for (d1 = 48; d1 < 58; d1++)
	{
		for (d2 = 48; d2 < 58; d2++)
		{
			if (d2 > d1)
			{
				putchar(d1);
				putchar(d2);
				if (d1 >= 56)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
