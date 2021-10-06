#include <stdio.h>

int num1;
void prueba(void)
	{
		int num1;
		num1 = 3;
		printf("%d", num1);
		printf("location of num1 prueba: %pn\n", &num1);
			
	}

int main(void)
{
	num1= 4;
	printf("main %d", num1);
	printf("location of num1 main: %pn\n", &num1);
	prueba();
	printf("main - %d\n", num1);

}
