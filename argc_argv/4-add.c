#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * description: adds positive nums
 * @argc: num of arg
 * @argv: array of arg
 *
 * Return: 0 if no num passed, 1 if error, else int
 */

int main(int argc, char *argv[])
{
	int index_1, index_2, len, sum;

	sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (index_1 = 1; index_1 < argc; index_1++)
	{
		len = strlen(argv[index_1]);
		sum += atoi(argv[index_1]);

		for (index_2 = 0; index_2 < len; index_2++)
		{
			if ((*(argv[index_1] + index_2) < '1') ||
				(*(argv[index_1] + index_2) > '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
