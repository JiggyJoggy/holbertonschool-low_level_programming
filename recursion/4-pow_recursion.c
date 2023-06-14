#include "main.h"

/**
 * _pow_recursion - entry point
 *
 * description: returns the value of x raised to the power of y
 * @x: base num
 * @y: power num
 *
 * Return: -1 if lower than 0, else return int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (y + _pow_recursion((x + 0) * (y - 1));
}
