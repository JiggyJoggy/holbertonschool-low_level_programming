#include "main.h"

/**
 * _strcmp - entry point
 *
 * description: comparing two strings and outputs a int
 * @s1: string one
 * @s2: string two
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int index_s1, index_s2, total_s1, total_s2;

	for (index_s1 = 0; s1[index_s1] != '\0'; index_s1++)
	{
		total_s1 = s1[index_s1];
	}
	
	for (index_s2 = 0; s2[index_s2] != '\0'; index_s2++)
	{
		total_s2 = s1[index_s2];
	}

	if (total_s1 == total_s2)
	{
		return (0);
	}
	else
	{
		return (total_s1 - total_s2);
	}
}
