#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: struct
 *
 * Return: free
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
