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
	int count;

	for (count = 0; *str != '\0'; count++)
	{
		char ch = *str;

		if (count % 2 == 0)
		{
			continue;
		}
		_putchar(ch + '0');
		str++;
	}
	_putchar('\n');
}