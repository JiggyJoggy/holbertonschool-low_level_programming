#include "main.h"

/**
 * _sqrt_recursion - entry point
 *
 * description: returns the natural square root of a num
 * @n: num
 *
 * Return: -1 if n does not have a natural square root, else return int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n / _sqrt_recursion(n - 1);
