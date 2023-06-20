#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints all args it receives
 * @argc: num of arg
 * @argv: array of arg
 *
 * Return: ALways 0
 */

int main(int argc, char *argv[])
{
	int index_1, index_2;

	for (index_1 = 0; index_1 < argc; index_1++)
	{
		for (index_2 = 0; index_2 < (int)strlen(argv[index_1]); index_2++)
		{
			_putchar(argv[index_1][index_2]);
		}
		_putchar('\n');
	}
	return (0);
}
