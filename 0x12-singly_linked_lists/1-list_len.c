#include "lists.h"

/**
 * list_len - Return number of elements in list_t.
 *
 * @h: name of the list
 *
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{

		i++;
		h = h->next;
	}
	return (i);
}
