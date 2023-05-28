#include <stdio.h>
#include "main.h"

/**
 * _islower - entry point
 *
 * description: checks for lowercase characters
 * @c: c is getting a char
 *
 * Return: 1 if lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	return (0);
}
