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
		if (str[count] % 2 == 0)
		{
			continue;
		}
		_putchar(str[count]);
	}
	_putchar('\n');
}
