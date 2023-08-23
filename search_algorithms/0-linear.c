#include "search_algos.h"

/*
 * linear_search - entry point
 * Description: using a linear search
 * @array: points to an array
 * @size: size
 * @value: value
 *
 * Return: -1 if NULL, else return index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array || !value)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
