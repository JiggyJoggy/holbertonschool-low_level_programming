#include "main.h"

/**
 * set_bit - entry point
 *
 * description: sets the value of a bit to 1 at a given index
 * @n: pointer to a num
 * @index: index of num
 *
 * Return: -1 if error occurred, else return 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	set = 1 << index;
	*n = *n | set;

	return (1);
}
