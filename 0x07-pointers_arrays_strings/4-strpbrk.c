#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches string for set of bytes
 * @s: string to check
 * @accept: substring of chars
 * Return: pointer to first occurance
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
