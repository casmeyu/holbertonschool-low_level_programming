#include "search_algos.h"
#include <math.h>
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx = 0, cont = 0, step;
	listint_t *tmp;

	if (size < 1 || !list)
		return (NULL);

	step = (size_t)sqrt((double)size);
	tmp = list;

	while (idx < size && tmp)
	{
		printf("node: %d\n", tmp->n);
		if (cont == 0)
		{
			printf("Value checked at index [%ld] = [%d]\n", idx, tmp->n);
			if (value == tmp->n)
				return (tmp);
			if (value < tmp->n)
			{
				printf("Value found between indexes [%ld] and [%ld]\n", idx - step, idx);
			}
		}
		if (cont == step)
			cont = 0;
		else
			cont++;
		idx++;
	}
	return (NULL);
}
