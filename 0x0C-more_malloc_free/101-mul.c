#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include<math.h>
#define MAX 100

char  *multiply (char *a, char *b, char *temp)
{
	unsigned int la, lb, pos_a, pos_b, pos_t, steps, resto, zeroes;


	printf("entered multiply");

	la = strlen(a) - 1;
	lb = strlen(b) - 1;
	pos_t = 0;
	steps = 0;

	for (pos_b = lb; pos_b >= 0; pos_b--)
	{
		resto = 0;
		for (pos_a = la; pos_a >= 0; pos_a--)
		{
			temp[pos_t] = ((b[pos_b] * a[pos_a]) + resto) % 10;
			resto = ((b[pos_b] * a[pos_a]) + resto) / 10;
			pos_t++;
		}
		temp[pos_t] = resto;
		pos_t++;
		steps++;

		/* Adjusting zeroes according to steps */
		for (zeroes = 0; zeroes <= steps; zeroes++)
		{
			temp[pos_t] = 0;
			pos_t++;
		}
	}
	return (temp);
}

int main(int argc, char *argv[])
{

	void *temp;

	printf("stated program\n");
	
	temp = malloc(100);
	
	if (!temp)
	{
		printf("could not allocate temp");
		exit(98);
	}
	printf("calling multiply");
	printf("resultado\n%s", multiply("14", "103", temp));
	
	free(temp);
	return (0);
}
