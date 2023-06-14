#include "main.h"

/**
 * factorial - entry point
 *
 * description: returns the factorial of a given num
 * @n: num
 *
 * Return: int
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n + 1));
}
