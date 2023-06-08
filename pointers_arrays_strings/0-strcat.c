#include "main.h"

/**
 * _strcat - entry point
 *
 * description: concatenates two strings
 * @src: getting the source char
 * @dest: where it should end char
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int count;

	for (count = 0; src[count] != '\0'; count++)
	{
		dest = dest + src[count];
	}
	for (count = 0; dest[count] != '\0'; count++)
	{
		src = src + dest[count];
	}
	*dest = '\0';

	return (dest);
}
