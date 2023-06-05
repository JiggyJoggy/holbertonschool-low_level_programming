#include "main.h"
#include <stdio.h>

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
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (count == 0)
		{
			_putchar(str[count]);
		}
		else if (count % 2 == 0)
		{
		_putchar(str[count]);
		}
	}
	_putchar('\n');
}
