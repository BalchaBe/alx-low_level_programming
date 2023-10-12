#include "lists.h"

/**
 * dlistint_len - Return list len
 * @h: struct list
 * Return: list_len
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	int c = 0;

	for (c = 0; h; c++)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
