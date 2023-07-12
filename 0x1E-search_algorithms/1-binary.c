#include "search_algos.h"
/**
 * binary_search - search for a value using binary search algorithm
 * @array: array to search
 * @size: length of array
 * @value: value to search
 * Return: index of value if found, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);

			if (i != right)
				printf(", ");
		}

		printf("\n");

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			left = mid + 1;

		else
			right = mid - 1;
	}

	return (-1);
}
