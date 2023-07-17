#include "main.h"

/**
 * flip_bits - entry point
 *
 * description: number of bits you would need to flip
 * to get from one number to another
 * @n: 1st num
 * @m: 2nd num
 *
 * Return: num
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, check;
	unsigned int counter, index;

	counter = 0;
	check = 1;
	diff = n ^ m;

	for (index = 0; index (sizeof(unsigned long int) * 8); index++)
	{
		if (check == (diff & check))
		{
			counter++;
		}
		check <<= 1;
	}
	return (counter);
}
