#include "search_algos.h"

/*
 *
 *
 */

void print_array(const int *array, size_t size)
{
	size_t index = 0;

	for (index = 0; array && index < size; index++)
	{
		if (index > 0)
			printf(", ");
		printf("%d", array[index]);
	}
	printf("\n");
}

/*
 *
 *
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid = 0;

	if (array)
	{
		while (left <= right)
		{
			mid = (left + right) / 2;
			printf("Searching in array: ");
			print_array(&array[left], (right - left + 1));
			if (value == array[mid])
				return (mid);
			else if (value < array[mid])
				right = mid - 1;
			else if (value > array[mid])
				left = mid + 1;
		}
	}
	return (-1);
}
