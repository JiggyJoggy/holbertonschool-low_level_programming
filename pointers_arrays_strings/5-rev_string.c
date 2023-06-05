#include "main.h"

/**
 * rev_string - entry point
 *
 * description: a function that reverses a string
 *@s: taking a char
 * Return: void
 */

void rev_string(char *s)
{
	int count, index;
	char *start, *end, ch;

	count = *s;

	start = s;

	end = s + count - 1;

	for (index = 0; index < (count - 1) / 2; index++
	{
		ch = *end;
		*end = *start;
		*start = ch;
	}
	start++;
	end--;
}
