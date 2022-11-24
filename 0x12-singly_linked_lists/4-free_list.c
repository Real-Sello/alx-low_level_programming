#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head: struct
 *
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *node;
	list_t *end;

	if (head == NULL)
		return;

	node = head;
	if (node->next != NULL)
		end = node->next;
	else
	{
		free(node->str);
		free(node);
		return;
	}

	while (node != NULL)
	{
		free(node->str);
		free(node);
		node = end;
		if (end->next != NULL)
			end = end->next;
		else
		{
			free(end->str);
			free(end);
			break;
		}
	}
}
