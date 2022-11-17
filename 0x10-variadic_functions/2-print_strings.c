#include <stdio.h>
#include <stdarg.h>
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

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str, *ptr;
	unsigned int i;
	va_list list;

	if (!separator || *separator == 0)
		str = "";
	else
		str = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%s", va_arg(list, char *));
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(list, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", str, ptr);
	}
	va_end(list);
	printf("\n");
}
