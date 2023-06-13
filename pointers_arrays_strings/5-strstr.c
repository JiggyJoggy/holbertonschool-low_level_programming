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
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			while (*haystack && *needle)
			{
				if (*haystack != *needle)
				{
					return (0);
				}
				haystack++;
				needle++;
		}
	}
	return (haystack);
}
