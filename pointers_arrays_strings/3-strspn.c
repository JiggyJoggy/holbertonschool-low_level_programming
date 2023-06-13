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

	counter = 0;

	for (index_s1 = 0; s[index_s1] != '\0'; index_s1++)
	{
		if (counter != index_s1)
		{
			break;
		}

		for (index_s2 = 0; accept[index_s2] != '\0'; index_s2++)
		{
			if (s[index_s1] == accept[index_s2])
			{
				counter++;
			}
		}
	}
	return (counter);
}
