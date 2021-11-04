#include <stdio.h>
#include <stdlib.h>
/**
 * main_opcodes - this function prints its own opcodes
 *
 * @argc: argument counter
 * @argv: list of arguments
 */
void main(int argc, char *argv[])
{
	unsigned char *j = 0;
	int i, nbytes;
	
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	
	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nbytes; i++)
	{
		printf("%x ", j + i);
	}

	printf("\n");

}
