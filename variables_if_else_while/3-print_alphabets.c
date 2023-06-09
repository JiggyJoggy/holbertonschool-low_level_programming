#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * description: printing the alphabet using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char start = 'a';
	char end = 'z';

	char letter = start;

	while (letter <= end)
	{
		putchar(letter);
		letter++;
	}

	letter = start;

	while (letter <= end)
	{
		putchar(toupper(letter));
		letter++;
	}

	putchar('\n');
	return (0);
}
