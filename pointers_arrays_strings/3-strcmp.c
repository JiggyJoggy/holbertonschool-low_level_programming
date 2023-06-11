#include "main.h"

/**
 * _strcmp - entry point
 *
 * description: comparing two strings and outputs a int
 * @s1: string one
 * @s2: string two
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0' || *s2 == '\0')
		{
			break;
		}
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else
	{
		return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
	}
}
