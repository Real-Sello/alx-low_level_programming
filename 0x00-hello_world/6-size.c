#include <stdio.h>
/**
 * main - Prints out the sizes of various data types on the computer
 * this program is compiled on.
 * Return: 0 if success.
 */

int main(void)
{

	printf("size of a char: %lu bytes\n", (unsigned long)sizeof(char));
	printf("size of an int: %lu bytes\n", (unsigned long)sizeof(int));
	printf("size of a long int: %lu bytes\n", (unsigned long)sizeof(long));
	printf("size of a long long int: %lu bytes\n", (unsigned long)sizeof(long long));
	printf("size of a float: %lu bytes\n", (unsigned long)sizeof(float));
	return (0);

}
