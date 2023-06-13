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
	int counter_1, counter_2;

	for (counter_1 = 0; haystack[counter_1] != '\0'; counter_1++)
	{
		counter_2 = 0;

		while (haystack[counter_1 + counter_2] == needle[counter_2] && needle[counter_2] != '\0')
		{
			counter_2++;
		}

		if (needle[counter_2] == '\0')
		{
			return (&haystack[counter_1]);
		}
	return (0);
}
