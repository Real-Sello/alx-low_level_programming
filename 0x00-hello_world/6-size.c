#include <stdio.h>
/**
 * main - Prints out the sizes of various data types on the computer
 * this program is compiled on.
 * Return: 0 if success.
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu bytes\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu bytes\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu bytes\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu bytes\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu bytes\n", (unsigned long)sizeof(e));
	return (0);

}
