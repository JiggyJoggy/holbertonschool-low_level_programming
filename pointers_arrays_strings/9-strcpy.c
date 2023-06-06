#include "main.h"

/**
 * _strcpy - entry point
 *
 * description: copying a string and pointing it to a variable
 * @dest: wants to point to
 * @src: where it's pointer now
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{

	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	
	return (start);
}
