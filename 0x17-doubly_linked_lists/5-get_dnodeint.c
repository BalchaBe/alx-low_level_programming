#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - eturns the nth node of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 * @index: index of the node to return
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int c;

	current = head;
	c = 0;
	while (current != NULL)
	{
		if (c == index)
			return (current);
		current = current->next;
		c++;
	}
	return (NULL);
}
