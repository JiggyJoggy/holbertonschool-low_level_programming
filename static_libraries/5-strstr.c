#include "main.h"

/**
 * _strstr - entry point
 *
 * description: function that locates a substring
 * @haystack: where to look (char)
 * @needle: what to find (char)
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int c1, c2;

	for (c1 = 0; haystack[c1] != '\0'; c1++)
	{
		c2 = 0;

		while (haystack[c1 + c2] == needle[c2] && needle[c2] != '\0')
		{
			c2++;
		}

		if (needle[c2] == '\0')
		{
			return (&haystack[c1]);
		}
	}
	return (0);
}
