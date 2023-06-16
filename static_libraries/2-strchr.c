#include "main.h"

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
	while (*s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
