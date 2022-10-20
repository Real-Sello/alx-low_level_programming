#include "main.h"

/**
 * print_most_numbers - prints numbers
 * Return: always 0 (successful)
 */

void print_most_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}

		n++;
	}
	_putchar('\n');

}
