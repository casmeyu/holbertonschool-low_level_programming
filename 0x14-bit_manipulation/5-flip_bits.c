#include "main.h"
/**
 * flip_bits - returns number of bits you would need to flip to get from n to m
 * @n: first number
 * @m: second number
 * Return: the number if bits to change in order to convert n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aux_cont;
	unsigned int cont = 0;

	aux_cont = (n ^ m); /*returns number with (== bits as 1 and != bits as 0)*/

	while (aux_cont)
	{
		cont += (aux_cont & 1);

		aux_cont >>= 1;
	}

	return (cont);
}
