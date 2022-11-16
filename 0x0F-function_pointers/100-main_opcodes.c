#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own function
 *
 * @argc: arguments passed
 *
 * @argv: arguments array
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;
	char *c;
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	c = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", c[i]);
			break;
		}
		printf("%02hhx ", c[i]);
	}

	return (0);
}
