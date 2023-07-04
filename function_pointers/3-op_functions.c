#include "3-calc.h"

/**
 * op_add - adds
 * description: adds
 * @a: 1st int
 * @b: 2nd int
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts
 * description: subtracts
 * @a: 1st int
 * @b: 2nd int
 * Return: sum
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies
 * description: multiplies
 * @a: 1st int
 * @b: 2nd int
 * Return: sum
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides
 * description: divides
 * @a: 1st int
 * @b: 2nd int
 * Return: sum
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder
 * description: remainder
 * @a: 1st int
 * @b: 2nd int
 * Return: sum
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
