#include "main.h"

/**
 * get_bit - entry point
 *
 * description: gets the value of a bit at a given index
 * @n: value/num
 * @index: index of the value
 *
 * Return: n
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
	{
		return (0);
	}

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}
	return (-1);
}
