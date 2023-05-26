#include <stdio.h>

/**
 * main - entry point
 *
 * description: printing all possible combinations of single-digit numbers
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

		if (num == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		num++;
	}
	return (0);
}
