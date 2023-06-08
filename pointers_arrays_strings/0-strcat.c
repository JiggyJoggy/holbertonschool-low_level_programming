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
	int count_s, count_d;

	while (dest[count_d] != '\0')
	{
		count_d++;
	}
	while (src[count_s] != '\0')
	{
		dest[count_d] = src[count_s];
		count_d++;
		count_s++;
	}
	*dest = '\0';

	return (dest);
}
