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
	int num;
	num = n % 10;

	if (num >= 0)
	{
		_putchar(num);
		return (num);
	}
	else
	{
		_putchar(num * -1);
		return(num * -1);
	}
}
