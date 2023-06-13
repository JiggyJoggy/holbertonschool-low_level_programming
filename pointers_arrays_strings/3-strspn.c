#include "main.h"

/**
 * _strspn - entry point
 *
 * descirption: function that gets the length of a prefix substring
 * @s: string
 * @accept: 2nd string
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int index_s1, index_s2, counter;

	index_s1 = 0;
	index_s2 = 0;
	counter = 0;

	while (*s++)
	{
		index_s1++;

		while (*accept++)
		{
			index_s2++;

			if (s[index_s1] == accept[index_s2])
			{
				counter++;
			}
		}
	}
	return (counter);
}
