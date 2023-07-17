#include "main.h"

/**
 * clear_bit - entry point
 *
 * description: sets the value of a bit to 0 at a given index
 * @n: pointer to the num
 * @index: index of num
 *
 * Return: -1 if error occurred, else return 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	set = ~(1 << index);
	*n = *n & set;

	return (1);
}
