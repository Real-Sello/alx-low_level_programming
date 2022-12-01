#include "main.h"
#include <unistd.h>
#include <limits.h>

/**
 * print_binary - function that prints the binary
 * representation of a number
 *
 * @n: number to print in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int li = 1ul << 63;
	char c = '0';

	while (!(li & n) && li != 0)
		li = li >> 1;

	if (li == 0)
		write(1, &c, 1);

	while (li)
	{
		if (li & n)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		li = li >> 1;
	}
}
