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
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
