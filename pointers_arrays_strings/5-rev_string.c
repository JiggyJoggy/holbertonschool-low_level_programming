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
	char *start_ch, *end_ch, curr_ch;

	count = 0;
	start_ch = s;
	end_ch = s;

	while (s[count] != '\0')
	{
		end_ch++;
		count++;
	}
	end_ch--;

	for (index = 0; index < count / 2; index++)
	{
		curr_ch = *end_ch;
		*end_ch = *start_ch;
		*start_ch = curr_ch;

		start_ch++;
		end_ch--;
	}
}
