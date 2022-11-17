#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * c = char, i = integer,
 * f = float, s = char
 *
 * @format: list of arguments types passed to function
 *
 * Return: always void
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int n = 0, i = 0;
	char *sep = ", ";
	char *str;

	va_start(list, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(list, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(list, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(list, double), sep);
			break;
		case 's':
			str = va_arg(list, char *);
			if (!str)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		n++;
	}
	va_end(list);
	printf("\n");
}
