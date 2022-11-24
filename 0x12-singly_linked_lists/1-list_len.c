#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* list_len - function that returns number
*  of elements in a linked list_t list
*
* @h: input
*
* Return: 0
*/

size_t list_len(const list_t *h)
{
	int len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
