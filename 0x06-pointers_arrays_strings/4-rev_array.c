#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverse an int array
 * @a: pointer
 * @n: array length
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i = 0, rev;

	for (rev = n / 2; rev > 0; rev--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
