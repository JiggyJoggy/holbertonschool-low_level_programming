#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry point
 *
 * description: prints all natural numbers from n to 98
 * @n: taking a int
 *
 * Return: void
 */

void print_to_98(int n)
{
	int end_num;

	end_num = 98;

	while (n <= end_num)
	{
		_putchar(n + '0');
		n++;
	}
}
