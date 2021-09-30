#include <unistd.h>
/**
 * main - This is the main function for printinf without printf or puts
 *
 * Returns: the number 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
