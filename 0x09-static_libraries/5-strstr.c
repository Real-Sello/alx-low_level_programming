#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to find
 * Return: pointer to start of needle
 * in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	char *occurance, *tempNeedle;

	if (!*needle) /* empty needle */
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle) /* initial match check */
		{
			occurance = haystack;
			tempNeedle = needle;
			while (*tempNeedle) /* check for match */
			{
				if (*haystack++ != *tempNeedle++)
				{ /* no match, pointer reset to first occurance */
					haystack = occurance;
					break;
				}
			}
			if (occurance != haystack) /* no reset, match found */
				return (occurance);
		}
		haystack++;
	}
	return (0); /* no match */
}
