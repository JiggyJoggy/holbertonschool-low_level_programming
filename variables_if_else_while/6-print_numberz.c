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
	int start = 0;
	int end = 9;

	int num = start;

	while (num <= end)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
