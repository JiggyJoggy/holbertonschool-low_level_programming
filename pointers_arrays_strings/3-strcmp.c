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
	int index_s1, index_s2,;

	for (index_s1 = 0; s1[index_s1] != '\0'; index_s1++)
	{
		s1++;
	}

	for (index_s2 = 0; s2[index_s2] != '\0'; index_s2++)
	{
		s2++;
	}

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else
	{
		return (*(unsigned char *)s1 - *(unsigned char)*s2);
	}
}
