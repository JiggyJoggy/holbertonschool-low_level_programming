#include "main.h"

/**
 * rev_string - entry point
 *
 * description: a function that reverses a string
 *@s: taking a char
 * Return: void
 */

void rev_string(char *s)
{
	int count;

	count = 0;

	while (count[s] != '\0')
	{
		_putchar(count[s]);
		count++;
	}

	_putchar('\n')

	for (count = count - 1; count >= 0; count--)
	{
		_putchar(count[s]);
	}
	_putchar('\n');
}
