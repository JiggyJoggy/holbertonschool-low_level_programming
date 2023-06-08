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
	char *cat = dest;
	int count;

	for (count = 0; *src != '\0'; count++)
	{
		dest = src;
		dest++;
	}
	*dest = '\0';

	return (cat);
}
