#include "lists.h"

/**
 *add_nodeint - Adds a new node at the beginning
 *of a listint_t list
 *@head: A pointer to the address of the head of the listint_t list
 *@n: the integer for the new node to contain
 *Or address of element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ne;

	ne = malloc(sizeof(listint_t));
	if (ne == NULL)
		return (NULL);

	ne->n = n;
	ne->next = *head;

	*head = ne;

	return (ne);
}
