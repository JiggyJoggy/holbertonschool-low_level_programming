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
	while (n <= 98 || n >= 98)
	{
		printf("%d", n);

		if (n < 98)
		{
			n++;
		}
		else if (n > 98)
		{
			n--;
		}
		else
		{
			break;
		}
		printf(", ");
	}
	putchar('\n');
}
