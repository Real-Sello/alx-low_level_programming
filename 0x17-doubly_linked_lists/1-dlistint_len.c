#include "lists.h"

/**
 * dlistint_len - counts number of elements
 *
 * @h: head of node
 *
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
