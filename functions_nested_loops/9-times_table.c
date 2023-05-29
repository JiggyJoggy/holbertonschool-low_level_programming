#include "main.h"

/**
 * print_num - entry point
 *
 * description: prints num with comma and spaces
 * @n: int to print
 *
 * Return: void
 */

void print_num(int n)
{
	_putchar('0' + n);
	_putchar(',');
	_putchar(' ');
}

/**
 * print_double - entry point
 *
 * description: prints double digit nums
 * @n: int to print
 * @last: last multiple
 *
 * Return: void
 */

void print_double(int n, int last)
{
	_putchar('0' + (n / 10));
	_putchar('0' + (n % 10));

	if (n == last)
	{
		return;
	}

	_putchar(',');
	_putchar(' ');
}

/**
 * times_table - entry point
 *
 * Description: print times table
 *
 * Return: void
 */

void times_table(void)
{
	int multiple = 0, increment = 1;

	while (multiple <= 9)
	{
		int last_num = multiple * 9;

		print_num(0);

		while (increment <= 9)
		{
			int curr_num = multiple * increment;

			if (curr_num > 9)
			{
				print_double(curr_num, last_num);
				increment++;
				continue;
			}

			if ((curr_num == last_num && curr_num != 0) || (increment == 9))
			{
				_putchar('0' + curr_num);
				break;
			}
			print_num(curr_num);
			increment++;
		}
		_putchar('\n');
		increment = 1;
		multiple++;
	}
}
