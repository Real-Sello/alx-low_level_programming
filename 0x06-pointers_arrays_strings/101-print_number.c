#include "main.h"

/**
  * print_number - print numbers chars
  * @n: integer params
  * Return: 0 (success)
 **/

void print_number(int n)
{
	unsigned int nr;

	nr = n;

	if (n < 0)
	{
		_putchar('-');
		nr = -n;
	}

	if (nr / 10 != 0)
	{
		print_number(nr / 10);
	}
	_putchar((nr % 10) + '0');
}
