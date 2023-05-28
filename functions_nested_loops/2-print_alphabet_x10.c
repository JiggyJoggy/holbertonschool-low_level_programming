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

	int num = num_start;

	while (num <= num_end)
	{
		char letter = start;

		while (letter <= end)
		{
			_putchar(letter);
			letter++;
		}
		num++;
		_putchar('\n');
	}
}
