#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - entry point
 *
 * description: concatenates two strings
 * @s1: first string
 * @s2: 2nd string
 *
 * Return: NULL if failed, else char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len_1, len_2, new;
	char *cat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len_1 = strlen(s1);
	len_2 = strlen(s2);
	new = len_1 + len_2 + 1;
	cat_str = malloc(new);

	if (new == NULL)
	{
		return (NULL);
	}

	memcpy(cat_str, s1, len_1);
	memcpy(cat_str + len_1, s2,);
	cat_str[new - 1] = '\0';

	return (cat_str);
}
