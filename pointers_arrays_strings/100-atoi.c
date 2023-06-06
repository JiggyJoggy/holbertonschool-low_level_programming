#include "main.h"

/**
 * _atoi - entry point
 *
 * description: converting a string to an int
 * @s: takes in a char/string
 *
 * Return: int
 */

int _atoi(char *s)
{
	int count, neg;
	unsigned int result;

	result = 0;
	neg = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == '-')
		{
			neg++;
		}

		if (s[count] >= '0' && s[count] <= '9')
		{
			result = (result * 10) + (s[count] - '0');

			if (s[count + 1] < '0' || s[count + 1] > '9')
			{
				break;
			}
		}
	}
	if (neg % 2 == 1)
	{
		result = result * -1;
	}
	return (result);
}
