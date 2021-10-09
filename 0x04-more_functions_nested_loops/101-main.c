#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_number(int n);
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}

void print_number(int n)
{
    /* If number is smaller than 0, put a - sign and do n * -1 */
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
 
    /* Divide by 10 and revur*/
    if (n / 10)
        print_number(n/10);
 
    _putchar(n % 10 + '0');
}
