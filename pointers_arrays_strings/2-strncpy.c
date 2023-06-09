#include "main.h"

/**
 * _strncpy - entry point
 *
 * description: copies a string
 * @dest: where it'll end
 * @src: where we get it
 * @n: size of bytes
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	for (; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	while (index < n)
	{
		dest[index++] = '\0';
	}
	return (dest);
}
