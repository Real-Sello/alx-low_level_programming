#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints numbers then a new line
 *
 * @separator: string to be printed between numbers
 *
 * @n: number of integers passed to function
 *
 * Return: always void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list list;

	if (!separator || *separator == 0)
		str = "";
	else
		str = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%d", va_arg(list, int));
	for (i = 1; i < n; i++)
		printf("%s%d", str, va_arg(list, int));
	va_end(list);
	printf("\n");
}
