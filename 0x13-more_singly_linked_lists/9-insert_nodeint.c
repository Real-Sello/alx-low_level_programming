#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position
 *
 * @head: head of list
 *
 * @idx: index of the list where the new node should be added,
 * starts at 0
 *
 * @n: value of node to add
 *
 * Return: address of the new node,NULL if fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *prev = NULL;
	int ct = idx;

	if (head == NULL)
		return (NULL);

	for (ptr = *head; ct && ptr != NULL; ct--, ptr = ptr->next)
		prev = ptr;
	if (ct)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	if (prev != NULL)
	{
		ptr->next = prev->next;
		prev->next = ptr;
	}
	else
	{
		ptr->next = NULL;
	}
	if (*head == NULL || idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}
	ptr->n = n;
	return (ptr);
}
