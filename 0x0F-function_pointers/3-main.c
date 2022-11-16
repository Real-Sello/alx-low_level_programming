#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple arithmetic operations
 *
 * @argc: number of arguments
 *
 * @argv: array of arguments
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i, j, output;
	int (*func)(int, int);
	char c;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((c == '/' || c == '%') && j == 0)
	{
		printf("Error\n");
		exit(100);
	}

	output = func(i, j);

	printf("%d\n", output);

	return (0);
}
