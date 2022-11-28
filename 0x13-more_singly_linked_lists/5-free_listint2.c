#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 *
 * @head: head
 *
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	for (next = (*head)->next; *head != NULL; *head = next)
	{
		next = (*head)->next;
		free(*head);
	}
}
