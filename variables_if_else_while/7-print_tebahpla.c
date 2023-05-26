#include <stdio.h>

/**
 * main - entry point
 *
 * description: printing the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char start = 'z';
	char end = 'a';

	char letter = start;

	while (letter >= end)
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
