#include "main.h"

/**
 * puts_half - entry point
 *
 * description: prints half of a string
 * @str: gets the string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int count, index;

	count = 0;
	index = 0;

	while (str[count] != '\0')
	{
		continue;
	}
	count++;

	while (str[count] < (count / 2))
	{
		_putchar(str[count]);
		str++;
	}
	_putchar('\n');
}
