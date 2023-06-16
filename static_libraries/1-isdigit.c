#include "main.h"
#include <stdio.h>

/**
 * _isdigit - entry point
 *
 * description: checks for a digit that is 0 through 9
 * @c: gets the int
 *
 * Return: 1 if int, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
