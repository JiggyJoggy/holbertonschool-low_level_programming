#include <stdio.h>
#include "main.h"

/**
 * _abs - entry point
 *
 * description: computes the absolute value of an integer
 * @n: gets an integer
 *
 * Return: int
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
