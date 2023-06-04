#include "main.h"

/**
 * print_rev - entry point
 *
 * description: printing out a string in reverse
 * @s: char string pointer
 *
 * Return: void
 */

void print_rev(char *s)
{
	int count, index;
	char *start;

	start = s;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	for (index = 0; index < count; index++)
	{
		char c;

		c = *s;

		_putchar(c);
		if (s == begin)
		{
			break;
		}
		s--;
	}
	_putchar('\n');
}
