#include "main.h"

/**
 * _strlen - entry point
 *
 * description: returns the length of a string
 * @s: takes a char pointer
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; count++)
	{
		s++;
	}
	return (count);
}
