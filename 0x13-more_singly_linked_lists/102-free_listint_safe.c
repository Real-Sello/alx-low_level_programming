#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 *
 * @h: points to first node in the linked list
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t list = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			list++;
		}
		else
		{
			free(*h);
			*h = NULL;
			list++;
			break;
		}
	}

	*h = NULL;

	return (list);
}
