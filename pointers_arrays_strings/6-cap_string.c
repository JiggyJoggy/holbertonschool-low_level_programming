#include "main.h"

/**
 * cap_string - entry point
 *
 * description: capitalizes all words of a string
 * @s: takes in a string/char
 *
 * Return: char
 */

char *cap_string(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		while (!(s[count] >= 'a' && s[count] <= 'z'))
		{
			count++;

			if (count == 0 || s[count - 1] == ' ' || s[count - 1] == '\t' || s[count - 1] == '\n' || s[count - 1] == ',' || s[count - 1] == ';' || s[count - 1] == '.' || s[count - 1] == '!' || s[count - 1] == '?' || s[count - 1] == '"' || s[count - 1] == '(' || s[count - 1] == ')' || s[count - 1] == '{' || s[count - 1] == '}')
				s[count] = s[count] - 32;
		}
	}
	return (s);
}
