#include "main.h"

/**
 * print_array - entry point
 *
 * description: an array of ints
 * @a: the array arug
 * @n: the num of int in that array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int loop;

	for (loop = 0; loop < n; loop++)
	{
		if (loop == n - 1)
		{
			printf("%d", a[loop]);
		}
		else
		{
			printf("%d, ", a[loop]);
		}
	}
}
