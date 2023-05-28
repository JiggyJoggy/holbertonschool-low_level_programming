#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * description: printing alphabet 10 times
 *
 * Return: Always void (Success)
 *
 */

void print_alphabet_x10(void)
{

	int num_start = 1;
	int num_end = 10;

	char start = 'a';
	char end = 'z';

	char letter = start;

	while (num_start <= num_end)
	{
		while (letter <= end)
		{
			_putchar(letter);
			letter++;
		}
	}
	_putchar('\n');
}
