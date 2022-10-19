#include <stdio.h>

/**
* main - prints even  number < 4,000,000
* Return: always 0 (0) (successful)
*/

int main(void)
{
	int i = 0, n = 1, num = 0;
	int sum = 0;

	while (num < 4000000)
	{
		num = i + n;
		i = n;
		n = num;
		if (num % 2 == 0)
		sum += num;
	}
	printf("%i\n", sum);
	return (0);
}
