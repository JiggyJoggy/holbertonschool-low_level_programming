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
	int count;
	char ch = *str;

	for (count = ch; *str != '\0'; count--)
	{

		_putchar(ch);
		str--;
	}
	_putchar('\n');
}
