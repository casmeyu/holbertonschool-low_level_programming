#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 *
 * @argc: argument counter
 * @argv: list of arguments
 *
 * Return: concatenated arguments or NULL if it fails
 */
char *argstostr(int argc, char *argv[])
{
	int pos_a, pos_c, c_len = 0, i = 0;
	char *con_args;

	if (argc == 1 || argv == NULL)
		return (NULL);

	for (pos_a = 0; argv[pos_a] != 0; pos_a++)
		for (pos_c = 0; argv[pos_a][pos_c] != 0; pos_c++)
			c_len++;

	con_args = malloc(c_len * sizeof(char));

	if (con_args == 0)
		return (NULL);




	for (pos_a = 0; argv[pos_a] != 0; pos_a++)
	{
		for (pos_c = 0; argv[pos_a][pos_c] != 0; pos_c++)
		{
			con_args[i] = argv[pos_a][pos_c];
			i++;
		}
		con_args[i] = '\n';
		i++;
	}

	return (con_args);
}
