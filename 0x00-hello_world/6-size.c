#include <stdio.h>
/**
 * main - Prints out the sizes of various data types on the computer
 * this program is compiled on.
 * Return: 0 if success.
 */

int main(void)
{

	printf("char size: %lu bytes\n", (unsigned long)sizeof(char));
	printf("int size: %lu bytes\n", (unsigned long)sizeof(int));
	printf("long size: %lu bytes\n", (unsigned long)sizeof(long));
	printf("long long size: %lu bytes\n", (unsigned long)sizeof(long long));
	printf("float size: %lu bytes\n", (unsigned long)sizeof(float));
	return (0);

}
