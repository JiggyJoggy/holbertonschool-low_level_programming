#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - entry point
 *
 * description: gets the last digit of a number
 * @n: gets an integer
 *
 * Return: int
 */

int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar(n % 10);
		return (n % 10);
	}
	else
	{
		_putchar(n * 1 % 10);
		return(n * 1 % 10);
	}
}
