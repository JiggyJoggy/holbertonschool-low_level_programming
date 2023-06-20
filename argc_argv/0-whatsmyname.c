#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints its name, followed by a new line
 * @argc: num of arg
 * @argv: array of ptrs to arg
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x;
	char *name = argv[0];
	(void)argc;

	for (x = 0; name[x] != '\0'; x++)
	{
		_putchar(name[x]);
	}
	_putchar('\n');

	return (0);
}
