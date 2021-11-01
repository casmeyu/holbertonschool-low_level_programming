#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - that splits a string into words
 *
 * @str: string to process
 *
 * Return: a pointer to a list of words
 */

int n_words(char *str)
{
	int pos_str, word_count = 0, counting = 0;

	for (pos_str = 0; str[pos_str] != 0; pos_str++)
	{
		if ((str[pos_str] >= 'a' && str[pos_str] <= 'z') || (str[pos_str] >= 'A' && str[pos_str] <= 'Z'))
		{
			counting += 1;
		}
		else
			if (counting != 0)
			{
				word_count += 1;
				counting = 0;
			}
	}

	return (word_count);
}

void alloc_words(char **arr, char *str, int word_count)
{
	int pos_str, counting = 0, word_pos = 0,word_len = 0, pos_arr = 0, pos_c;
	
	for (pos_str = 0; str[pos_str] != 0; pos_str++)
	{
		if ((str[pos_str] >= 'a' && str[pos_str] <= 'z') || (str[pos_str] >= 'A' && str[pos_str] <= 'Z'))
		{
			counting += 1;
			if (counting != 0)
				word_len++;
		}
		else
			if (counting != 0)
			{
				arr[pos_arr] = malloc(word_len * (sizeof(char)));
				if (arr[pos_arr] == NULL)
				{
					for (; pos_arr <= 0; pos_arr--)
						free(arr[pos_arr]);
					free(arr);
				}
				pos_arr += 1;
				counting = 0;
				word_len = 0;
			}
	}
	counting = 0;
	pos_arr = 0;
	pos_c = 0;
	for (pos_str = 0; str[pos_str] != 0; pos_str++)
	{
		if ((str[pos_str] >= 'a' && str[pos_str] <= 'z') || (str[pos_str] >= 'A' && str[pos_str] <= 'Z'))
		{
			counting += 1;
			if (counting != 0)
			{
				arr[pos_arr][pos_c] = str[pos_str];
				pos_c++;
			}
		}
		else
		{
			if (counting !=0)
			{
				counting = 0;
				pos_c = 0;
				pos_arr++;
			}
		}	


}

char **strtow(char *str)
{
	char **arr;
	int pos_str, pos_arr = 0, word_count = 0, word_len = 0, counting = 0, pos_c = 0;

	if (str == 0)
		return (NULL);
	
	word_count = n_words(str);

	arr = malloc((word_count * sizeof(char *) + 1));
	
	if (arr == NULL)
		return (NULL);

	printf("word_count: %d\n", word_count);

	alloc_words(arr, str, word_count);
	/* malloc *arr for each word lenght
	for (pos_str = 0; str[pos_str] != 0; pos_str++)
        {
                if ((str[pos_str] >= 'a' && str[pos_str] <= 'z') || (str[pos_str] >= 'A' && str[pos_str] <= 'Z'))
                {
			counting += 1;
			if (counting != 0)
				word_len++;
		}
		else
                        if (counting != 0)
                        {
				arr[pos_arr] = malloc(word_len * (sizeof(char)));
				if (arr[pos_arr] == NULL)
				{
					for (; pos_arr <= 0; pos_arr--)
						free(arr[pos_arr]);
					free(arr);
				}
                                pos_arr += 1;
                                counting = 0;
				word_len = 0;
                        }
        }
    	*/
	arr[pos_arr] = 0;
	return (arr);

}
