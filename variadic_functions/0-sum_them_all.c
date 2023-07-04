#include "variadic_functions.h"

/**
 * sum_them_all - entry point
 *
 * description: function that returns the sum of all its parameters
 * @n: num
 *
 * Return: 0 if n equals 0, else return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int index, arg, sum = 0;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	for (index = 0; index < n; index++)
	{
		arg = va_arg(ap, int);
		sum += arg;
	}
	va_end(ap);

	return (sum);
}
