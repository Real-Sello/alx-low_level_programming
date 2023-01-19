#include "lists.h"

/**
 * print_dlistint - prints elements of a dlistint_t
 *
 * @h: pointer to list to print
 *
 * Return: number of nodes
 * On error, -1 is returned
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
	{
		return (nodes);
	}
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
