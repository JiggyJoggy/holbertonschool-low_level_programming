#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strncat - entry point
 *
 * description: concatenates two strings but itwill use atmost n bytes fromsec
 * and src does not need to be null-term if it contains n or more bytes
 *
 * @dest: char arg where it'll end
 * @src: char arg where it'll get
 * @n: the byte size
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int index_d, index_s;

	index_d = 0;

	while (dest[index_d] != '\0')
	{
		index_d++;
	}

	for (index_s = 0; src[index_s] != '\0' && index_s < n; index_d++, index_s++)
	{
		dest[index_d] = src[index_s];
	}
	dest[index_d] = '\0';

	return (dest);
}
