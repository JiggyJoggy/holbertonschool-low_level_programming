#include <stdio.h>

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

	char startupper = 'A';
	char endupper = 'Z';

	char letterupper = startupper

	while (letterupper <= endupper)
	{
		putchar(letterupper);
		letterupper++;
	}

	putchar('\n');
	return (0);
}
