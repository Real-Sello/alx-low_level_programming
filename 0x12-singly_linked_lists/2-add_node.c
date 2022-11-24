#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds node at the
 * beginning of list list_t
 *
 * @head: head node
 *
 * @str: string
 *
 * Return: address of new element or
 * NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	int i, c = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		c++;

	new->len = i;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}
