#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (successful)
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if ((c == 'q') || (c == 'e') != 1)
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);

}
