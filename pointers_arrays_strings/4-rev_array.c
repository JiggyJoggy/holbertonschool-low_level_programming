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
	int index, index2;

	for (index = 0; index < n; index++)
	{
		a[index++];
	}

	a=&a[n - 1];

	for (index2 = 0; index2 < n; index2++)
	{
		*a--;
	}
}
