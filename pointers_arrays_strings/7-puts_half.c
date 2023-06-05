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

	while (str[count] != '\0')
	{
		count++;
	}

	if (count % 2 == 1)
	{
		count--;
	}

	for (index = 0; str[index] != '\0'; index++)
	{
		char c = str[index];

		if (index < (count / 2))
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
