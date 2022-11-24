#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * before_main - prints before main
 *
 * Return: void
 */

void __attribute__ ((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
