#include "lists.h"

/**
 * free_list - free memory allocated for a list
 *
 * @head: pointer to the first node of the list to free
 */

void free_list(list_t *head)
{
	struct list_s *temp = NULL;
	struct list_s *aux = NULL;

	temp = head;
	while (temp != NULL)
	{
		aux = temp->next;
		free(temp->str);
		free(temp);
		temp = aux;
	}
	head = NULL;
}
