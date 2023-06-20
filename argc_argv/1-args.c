#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints the num of args passed into it
 * @argc: num of arg
 * @argv: array of arg
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num = argc - 1;
	(void) *argv[0];

	_putchar(num + '0');

	_putchar('\n');

	return (0);
}
