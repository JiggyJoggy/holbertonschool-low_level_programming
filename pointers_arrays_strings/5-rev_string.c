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

	while (s[count] != '\0')
	{
		_putchar(s[count]);
		count++;
	}

	_putchar('\n');

	for (count = count - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
