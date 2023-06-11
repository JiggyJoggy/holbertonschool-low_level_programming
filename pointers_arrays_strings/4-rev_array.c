#include "main.h"

/**
 * reverse_array - entry point
 *
 * description: reverse the content of an array of integers
 *
 * @a: the array
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int start, end, curr;

	for (start = 0, end = n - 1; start < n / 2; start++, end--)
	{
		curr = *a;
		*a = end;
	}
}
