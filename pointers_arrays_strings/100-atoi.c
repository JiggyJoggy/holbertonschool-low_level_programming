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
	int count, result, pos, neg;

	result = 0;
	pos = 0;
	neg = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == '+')
		{
			pos++;
		}
		else if (s[count] == '-')
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
	if ((pos == 0 || pos > 0) && neg % 2 == 1)
	{
		if (result > 2147483647)
		{
			result = (unsigned) result;
		}
		result = result * -1;
	}
	return (result);
}
