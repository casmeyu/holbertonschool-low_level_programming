#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* itoa(int val, int base){
	
	static char buf[32] = {0};
	
	int i = 30;
	
	for(; val && i ; --i, val /= base)
	
		buf[i] = "0123456789abcdef"[val % base];
	
	return &buf[i+1];
	
}

int main(void)
{
	int n1, n2, len, idx, flag = 1;
	unsigned long int res = 0;
	char *to_s;

	for (n1 = 100; n1 < 1000; n1++)
	{
		for (n2 = 100; n2 < 1000; n2++)
		{
			to_s = itoa((n1 * n2), 10);
			len = strlen(to_s);
			flag = 1;
			for (idx = 0; to_s[idx]; idx++)
			{
				if (to_s[idx] != to_s[len - 1])
				{
					flag = 0;
					break;
				}
				len--;
			}
			if (flag == 1)
			{
				printf("palindrome is: %s\n", to_s);
				if (atoi(to_s) > res)
					res = atoi(to_s);
			}
		}
	}

	printf("res: %ld\n", res);

	return (0);
}
