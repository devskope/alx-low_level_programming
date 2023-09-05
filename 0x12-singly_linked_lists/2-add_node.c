#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns length of a string.
 * @s : s is a character
 * Return: value is i
 */
int _strlen(const char *s)
{
	int i = 0;

	while ('\0' != s[i])
	{
		i++;
	}

	return (i);
}

/**
 * add_node - add new node at beginning of list_t.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
