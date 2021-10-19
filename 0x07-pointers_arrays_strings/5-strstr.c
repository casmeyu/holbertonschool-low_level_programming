#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack
 * 
 * @haystack: the string to search in
 * @needle: the string to search for
 *
 * Return: the first occurance of the first needle string in the haystack
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int pos_h, pos_find = 0;
	
	if (!needle)
		return (haystack);

	for (pos_h = 0; haystack[pos_h] != 0;)
	{
		if (haystack[pos_h + pos_find] == needle[pos_find])
		{
			pos_find++;
		}
		else if (needle[pos_find] == 0 && pos_find > 0)
		{
			return (&haystack[pos_h]);
		}
		else
		{
			pos_h++;
		}
	}	

	return (0);
}
