#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of the node where the loop starts,
 * NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *list1 = head;
	listint_t *list2 = head;

	if (!head)
		return (NULL);

	while (list1 && list2 && list2->next)
	{
		list2 = list2->next->next;
		list1 = list1->next;
		if (list2 == list1)
		{
			list1 = head;
			while (list1 != list2)
			{
				list2 = list2->next;
				list1 = list1->next;
			}
			return (list2);
		}
	}
	return (NULL);
}
