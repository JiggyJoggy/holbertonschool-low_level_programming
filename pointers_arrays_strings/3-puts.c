#include "main.h"

/**
 * _puts - entry point
 *
 * description: prints a string, followed by a new line to stdout
 * @str: taking a char string
 *
 * Return: void
 */

void _puts(char *str)
{
	int count;

	for (count = 0; *str != '\0'; count++)
	{
		char ch = *str;
		_putchar(ch);
		str++;
	}
	_putchar('\n');
}
