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
		count++;
		continue;
	}

	while (index < (count / 2))
	{
		_putchar(str[count]);
		index++;
	}
	_putchar('\n');
}