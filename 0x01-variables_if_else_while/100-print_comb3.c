#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (successful)
 */

int main(void)
{
	int n;
	int i = 1;

	for (n = 0 ; n < 89 ; n++)
	{
		putchar(n / 10 + '0');
		putchar(i + '0');
		if (n < 89)
		{
			putchar(',');
			putchar(32);
		}
		i++;
		if (i > 9)
		{
			i = 0;
		}
	}
	putchar('\n');
	return (0);
}
