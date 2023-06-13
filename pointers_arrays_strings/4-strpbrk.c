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
	int count_s1, count_s2;

	for (count_s1 = 0; s[count_s1] != '\0'; count_s1++)
	{
		for (count_s2 = 0; accept[count_s2] != '\0'; count_s2++)
		{
			if (s[count_s1] == accept[count_s2])
			{
				return (s);
			}
		}
	}
	return (0);
}
