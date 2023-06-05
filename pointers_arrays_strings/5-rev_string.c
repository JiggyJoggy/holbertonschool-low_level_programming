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
	int count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	while (count >= 0)
	{
		count = count - 1;
		count--;
	}
	count = *s;
}
