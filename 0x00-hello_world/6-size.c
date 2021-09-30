#include <stdio.h>
/**
 * main - this is the main function for exercise 6
 *
 * Return: the number 0
 */
int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu byte(s)\n", sizeof(long));
	printf("Size of long long int: %zu bytes\n", sizeof(unsigned long));
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
