#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (successfull)
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
