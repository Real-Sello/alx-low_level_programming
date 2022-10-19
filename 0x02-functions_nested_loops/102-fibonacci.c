#include <stdio.h>

/**
 * main - prints first 52 fibonacci numbrs
 *		starting with 1 and 2
 * Return: always 0 (successful)
 */

int main(void)
{
	int i = 0;
	long l = 1, n = 2;

	while (i < 50)
	{
		if (i == 0)
		printf("%ld", l);
		else if (i == 1)
		printf(", %ld", n);
		else
		{
			n += l;
			l = n - l;
			printf(", %ld", n);
		}
		++i;
	}
	return (0);
}
