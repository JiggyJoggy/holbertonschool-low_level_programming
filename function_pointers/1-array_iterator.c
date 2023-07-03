#include "function_pointers.h"

/**
 * array_iterator - entry point
 *
 * description: function that executes a function given as a para
 * on each element of an array
 * @array: ptr array
 * @size: size of array
 * @action: pointer function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array != NULL && action != NULL)
	{
		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
	}
}
