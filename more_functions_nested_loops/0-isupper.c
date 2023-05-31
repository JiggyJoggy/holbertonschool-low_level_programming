#include "main.h"
#include <stdio.h>

/**
 * _isupper - entry point
 *
 * description: check for uppercase characters
 * @c: getting char
 *
 * Return: 1 if char is uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c < 65 || c > 90)
	{
		_putchar(c + '0');
		return (1);
	}
	return (0);
}
