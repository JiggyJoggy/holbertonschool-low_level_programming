#include <stdio.h>

/**
 * main - entry point
 *
 * description: printing the alphabet using putchar without q and e
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
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}

		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
