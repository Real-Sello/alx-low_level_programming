#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - returns index of of first element
 *
 * @array: array
 *
 * @size: number of elements in array
 *
 * @cmp: pointer to used function
 *
 * Return: 0, else if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
