#include "main.h"

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int
 *
 * @b: points to string of 0 and 1 chars
 *
 * Return: Converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;
	int k = 1, i = 0;

	if (b == NULL)
		return (0);

	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i >= 0)
	{
		dec_val += ((b[i] - '0') * k);
		k *= 2;
		i--;
	}


	return (dec_val);

}
