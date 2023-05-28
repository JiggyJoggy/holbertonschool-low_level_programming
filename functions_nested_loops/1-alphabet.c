#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - entry point
 *
 * description: printing alphabet
 *
 * Return: Always void (Success)
 *
 */

void print_alphabet(void)
{
	char start = 'a';
	char end = 'z';

	char letter = start;

	while (letter <= end)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
