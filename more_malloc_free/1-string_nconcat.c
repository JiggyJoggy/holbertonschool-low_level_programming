#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - entry point
 *
 * description: function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: first number of bytes in s2
 *
 * Return: NULL if function fails, else return pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t length;
	char *cat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length = strlen(s1) + n;
	cat = malloc(length + 1);

	if (cat == NULL)
	{
		return (NULL);
	}

	strcpy(cat, s1);
	strncat(cat, s2, n);

	return (cat);
}
