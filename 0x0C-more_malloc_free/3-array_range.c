#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates memory for an array
 *
 * @min: minimum int type
 *
 * @max: maximum int type
 *
 * Return:  return pointer to array
 *
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int arr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	arr = 0;
	while (min <= max)
	{
		ptr[arr] = min;
		min++;
		arr++;
	}
	return (ptr);
}
