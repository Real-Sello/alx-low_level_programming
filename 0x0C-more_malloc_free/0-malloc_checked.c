#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory with malloc
 *
 * @b: unsigned int
 *
 * Return: pointer, 98 at fail
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
