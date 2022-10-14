#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (successful)
 */

int main(void)
{
	int c;

	for (c = 'z' ; c >= 'a' ; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
