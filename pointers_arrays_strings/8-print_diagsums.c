#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - entry point
 *
 * description: prints the sum of two diagonals
 * @a: takes the array
 * @size: how big it should be
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int c1, c2, sum;

	for (c1 = 0; c1 < size; c1++)
	{
		for (c2 = 0; c2 < size; c2++)
		{
			if (c1 == c2 || c1 + c2 == size - 1)
			{
				sum = sum + a[c1][c2];
			}
		}
	}
	printf("%d\n", sum);
}
