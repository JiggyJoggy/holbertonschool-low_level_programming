#include <stdio.h>
#include "main.h"

/**
 * _isalpha - entry point
 *
 * description: checks for lowercase and uppercase characters
 * @c: c is getting a char
 *
 * Return: 1 if lowercase or uppercase, otherwise 0
 */

int _isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
	{
		return (1);
	}
	return (0);
}
