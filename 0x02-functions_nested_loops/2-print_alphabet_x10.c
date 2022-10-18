#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10x
 * Return: always 0 (success)
 */

void print_alphabet_x10(void)
{
	int a;
	int z;

	for (z = '0' ; z <= '9' ; z++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}
