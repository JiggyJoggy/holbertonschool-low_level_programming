#include "main.h"

/**
 * _strpbrk - entry point
 *
 * description: searches a string for any of a set of bytes
 * @s: string arg
 * @accept: bytes of char wanting
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s != '\0')
	{
		temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
		}
	}
	return (0);
}
