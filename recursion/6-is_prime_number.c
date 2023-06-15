#include "main.h"

/**
 * is_prime_number - entry point
 *
 * description: checks if its a prime num
 * @n: num
 *
 * Return: 1 if prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n % 2 == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (0);
	}
	return (n % is_prime_number(n % 2));
}
