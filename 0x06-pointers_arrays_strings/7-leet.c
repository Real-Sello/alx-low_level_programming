#include <stdio.h>
#include "main.h"

/**
 * leet - encodes to leet
 * @s: char array string type
 * Return: s encoded
 */

char *leet(char *s)
{
	int i, li;
	char s1[] = "aeotl";
	char S1[] = "AEOTL";
	char s2[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (li = 0; li < 5; li++)
		{
			if (s[i] == s1[li] || s[i] == S1[li])
			{
				s[i] = s2[li];
				break;
			}
		}
	}
	return (s);
}
