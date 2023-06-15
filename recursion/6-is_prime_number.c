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
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}

	if (n % i == 0)
	{
		is_prime_number(n - 1);
		return (0);
	}
	return (1);
}
