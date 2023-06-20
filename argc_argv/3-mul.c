#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * description: multiples two nums
 * @argc: num of arg
 * @argv: array of arg
 *
 * Return: Return 1 if ERROR, else 0
 */

int main(int argc, char *argv[])
{
	int arg_1, arg_2, sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	arg_1 = atoi(argv[1]);
	arg_2 = atoi(argv[2]);

	sum = arg_1 * arg_2;

	printf("%d\n", sum);

	return (0);
}
