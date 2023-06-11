#include "main.h"

/**
 * string_toupper - entry point
 *
 * description: changes all lowercase letters to an uppercase; string
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] >= 'a' && s[count] <= 'z')
		{
			s[count] -= 32;
		}
	}
	return (s);
}
