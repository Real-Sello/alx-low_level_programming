#include "main.h"

/**
 * get_bit - function that returns the value
 * of a bit at a given index
 *
 * @n: number to search
 *
 * @index: bit index
 *
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ul;

	if (index > 63)
		return (-1);

	ul = 1 << index;
	return ((n & ul) > 0);
}
