#include <stdio.h>

/**
 * main - entry point
 *
 * description: printing numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int start = 0;
	int end = 9;

	int num = start;

	while (num <= end)
	{
		putchar('0' + num);
		num++;
	}

	char start2 = 'a';
	char end2 = 'f';

	char letter = start2;

	while (letter <= end2)
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
