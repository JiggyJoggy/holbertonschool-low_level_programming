#include <stdio.h>
#include "main.h"

/**
 * print_sign - entry point
 *
 * description: checks for lowercase characters
 * @n: n is getting a int
 *
 * Return: 1 if +, 0 if zero, -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
