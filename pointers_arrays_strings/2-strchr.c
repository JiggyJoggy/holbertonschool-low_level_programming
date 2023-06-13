#include "main.h"
#include <stddef.h>

/**
 * _strchr - entry point
 *
 * description: locates a character in a string
 * @s: the whole string
 * @c: the char
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		else if (*s == '\0')
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
