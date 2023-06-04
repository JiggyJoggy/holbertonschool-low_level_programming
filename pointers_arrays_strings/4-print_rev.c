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
	char ch = *s;

	for (count = ch; *s != '\0'; count--)
	{

		char ch_print;

		ch_print = *s;

		_putchar(ch_print);
		s++;
	}
	_putchar('\n');
}
