#include <stdio.h>
/**
 * main - Prints out the sizes of various data types on the computer
 * this program is compiled on.
 * Return: 0 if success.
 */

int main(void)
{
	printf("char size: %lu bytes\n", sizeof(char));
	printf("int size: %lu bytes\n", sizeof(int));
	printf("long size: %lu bytes\n", sizeof(long));
	printf("long long size: %lu bytes\n", sizeof(long long));
	printf("float size: %lu bytes\n", sizeof(float));
	return (0);
}
