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
	char start_letter, end_letter, letter;
	int start_num, end_num, num;

	start_num = 0;
	end_num = 9;
	start_letter = 'a';
	end_letter = 'f';

	num = start_num;
	letter = start_letter;

	while (num <= end_num)
	{
		putchar('0' + num);
		num++;
	}

	while (letter <= end_letter)
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
