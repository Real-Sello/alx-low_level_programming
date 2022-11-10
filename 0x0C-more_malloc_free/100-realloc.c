#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocates memory size
 *
 * @ptr: pointer to address of old memory
 *
 * @old_size: unsigned int of old memory size
 *
 * @new_size: unsigned int of new memory size
 *
 * Return: pointer to array
 *
 * if new_size == old_size, returns ptr without changes
 * if malloc fails, returns NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
