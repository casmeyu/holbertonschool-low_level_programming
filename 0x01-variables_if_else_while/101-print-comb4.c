#include <stdio.h>
/**
 *  main - this is the main function for print comb 4
 *
 *  Return: the number 0
 *
 */
int main(void)
{
	int c, d, u;

	for (c = 48; c < 58; c++)
	{
		for (d = 48; d < 58; d++)
		{
			if (d > c)
			{
				for (u = 48; u < 58; u++)
                        	{
					if (u > d)
					{
                                		putchar(c);
                                		putchar(d);
                                		putchar(u);
						if (u == 57 && d == 56 && c == 55)
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
	}
	return (0);
}
