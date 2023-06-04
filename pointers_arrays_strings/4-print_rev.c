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
	char *begin;
	char ch = *s;

	begin = s;

	while (count != '\0')
	{
		count++;
		s++;
	}
	for (index = 0; index < count; index++)
	{
		_putchar(ch);
		if (s == begin)
		{
			break;
		}
		s--;
	}
	_putchar('\n');
}
