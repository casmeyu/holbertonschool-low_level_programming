#include <stdio.h>
/**
 * main - this is the main function for print comb5
 *
 * Return: the number 0
 *
 */
int main(void)
{
	int d1, u1, d2, u2;

	for (d1 = 48; d1 < 58; d1++)
	{
		for (u1 = 48; u1 < 58; u1++)
		{
			for (d2 = 48; d2 < 58; d2++)
			{
				for (u2 = 48; u2 < 58; u2++)
				{
					if (d2 < d1 && u2 < u1)
						continue;
					putchar(d1);
					putchar(u1);
					putchar(' ');
					putchar(d2);
					putchar(u2);
					if (u1 == 57 && d1 == 57 && u2 == 57 && d2 == 57)
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
	}	
	return (0);
}
