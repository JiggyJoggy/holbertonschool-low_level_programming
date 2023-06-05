#include "main.h"

/**
 * puts2 - entry point
 *
 * description: prints every other of a string
 * @str: getting the string
 *
 * Return: void
 */

void puts2(char *str)
{
	str = str - 1;

	while (*str != '\0')
	{
		_putchar(str);
		str++;
	}
	_putchar('\n');
}
