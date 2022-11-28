#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning
 * of a lidtint_t list
 *
 * @head: head node
 *
 * @n: variable
 *
 * Return: address of new element, NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	if (head == NULL)
		return (NULL);

	list = malloc(sizeof(listint_t));
	if (list == NULL)
		return (NULL);

	list->n = n;
	list->next = *head;
	*head = list;

	return (list);
}
