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
	int count;

	for (count = 0; str[count] >= str[count] / 2; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
