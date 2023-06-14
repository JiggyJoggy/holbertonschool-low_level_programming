#include "main.h"

/**
 * _strlen_recursion - entry point
 *
 * description: returns the length of a string
 * @s: string
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int counter = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		counter++;
	}
	return (counter++);
}
