#include "main.h"

/**
 * clear_bit - function that sets the value of
 * a bit to 0 at a given index
 *
 * @n: pointer to number
 *
 * @index: index, starting from 0 of the bit
 *
 * Return: 1 if it worked, -1 at error
 */
	int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1ul << index);
	return (1);
}

