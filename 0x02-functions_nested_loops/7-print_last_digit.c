#include "main.h"

/**
 *print_last_digit - printds last digit
 *@n: passed arguments
 *Return: last digit
 */

int print_last_digit(int n)
{
	int x;

	x = (n % 10);

	if (x < 0)
	{
		x = (-1 * x);
	}
	_putchar(x + '0');
	return (x);
}
