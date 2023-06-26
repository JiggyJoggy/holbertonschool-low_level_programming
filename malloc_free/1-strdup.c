#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - entry point
 *
 * description: returns a pointer to a newly allocated space
 * in memory, contains a copy of the string
 * @str: string arg
 *
 * Return: NULL if str is empty or NULL, else pointer
 */

char *_strdup(char *str)
{
	int str_size;
	static char *copy;
	char *copy_offset;

	str_size = strlen(str);
	copy = (char *) malloc(sizeof(char) *str_size + 1);

	if (copy == NULL)
	{
		return ((char *) NULL);
	}

	copy_offset = copy;

	while (*str)
	{
		*copy_offset = *str;
		copy_offset++;
		str++;
	}
	return (copy);
}
