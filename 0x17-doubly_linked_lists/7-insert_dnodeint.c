#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given position
 * @h: head of node
 * @idx: index to insert node
 * @n: data for new node
 * Return: address on new node, NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int ui;

	if (h == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	temp = *h;
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (idx == 0)
	{
		if (*h == NULL)
			(*h) = newnode;
		else
		{
			newnode->next = *h;
			temp->prev = newnode;
			*h = newnode;
		}
		return (newnode);
	}
	for (ui = 0; ui < (idx - 1); ui++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	newnode->n = n;
	newnode->next = temp->next;
	newnode->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = newnode;
	temp->next = newnode;
	return (newnode);
}
