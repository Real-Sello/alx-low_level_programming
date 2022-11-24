#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	int c = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		c++;
	}

	return (c);
}
