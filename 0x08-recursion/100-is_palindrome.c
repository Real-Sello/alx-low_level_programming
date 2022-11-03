#include "main.h"

/**
 * _strlen_recursion - returns length of string.
 *
 * @s: string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}

/**
 * checker - helper function for is_palindrome
 *
 * @str: string
 *
 * @len: length of string
 *
 * @count: counter of recursion
 *
 * Return: 1 if string is palindrome, 0 if not
 */

int checker(char *str, int len, int count)
{
	if (count >= len)
		return (1);
	if (str[len] == str[count])
		return (checker(str, len - 1, count + 1));
	return (0);
}

/**
 * is_palindrome - checks if string is palindrome
 *
 * @s: string
 *
 * Return: 1 if string is palindrome, 0 if it is not.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int count = 0;

	return (checker(s, len - 1, count));
}
