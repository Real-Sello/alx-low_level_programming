#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * of a listint_t linked list
 *
 * @head: head
 *
 * Return: head node's data(n), 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int nodedata;

	listint_t *new;

	if (*head == NULL)
		return (0);

	nodedata = (*head)->n;

	new = *head;
	*head = (*head)->next;

	free(new);
	return (nodedata);
}
