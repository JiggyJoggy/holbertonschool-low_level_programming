#include "function_pointers.h"

/**
 * int_index - entry point
 *
 * description: function that searches for an integer
 * @array: ptr array
 * @size: size of elements in the array
 * @cmp: pointer function to compare values
 *
 * Return: -1 if no element matches or size is less or equal to 0
 * else return int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}

		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
			{
				return (index);
			}
		}
	}
	return (-1);
}
