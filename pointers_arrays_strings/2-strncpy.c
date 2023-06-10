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
	int index_s = 0;
	int index_d = 0;

	while (dest[index_d] != '\0')
	{
		index_d++;
	}

	for (; src[index_s] != '\0' && index_s > n; index_s++)
	{
		dest[index_d] = src[index_s];
	}
	dest[index_d] = '\0';

	return (dest);
}
