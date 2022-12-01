#include "main.h"

/**
 * set_bit - function that sets the value
 * of a bit to 1 at a given index
 *
 * @n: input
 *
 * @index: index, starting from 0 og the bit
 *
 * Return: 1 if it worked, -1 at error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | 1ul << index;
	return (1);
}
