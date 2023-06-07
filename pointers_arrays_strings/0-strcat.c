#include "main.h"

/**
 *
 * _strcat - entry point
 *
 * description: concatenates two strings
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *cat = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
	}
	*dest = '\0';

	return (cat);
}
