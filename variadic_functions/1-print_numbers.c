#include "variadic_functions.h"

/**
 * print_numbers
 *
 * description: function that prints nums
 * @separator: string printed between nums
 * @n: number of ints
 *
 * Return: NULL if separator is NULL, else print n
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index, num;
	va_list ap;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		num = va_arg(ap, int);
	}
	if (!separator)
	{
		separator = "";
	}
	if (index == n - 1)
	{
		printf("%d", num);
	}
	else
	{
		printf("%d%s", num, separator);
	}
	printf("\n");

	va_end(ap);
}
