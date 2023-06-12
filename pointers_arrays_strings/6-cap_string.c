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
	int string_index, arr_index, arr_len;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	arr_len = 13;

	for (string_index = 0; s[string_index] != '\0'; string_index++)
	{
		for (arr_index = 0; arr_index < arr_len; arr_index++)
		{
			if ((sep[arr_index] == s[string_index])
			&& (s[string_index + 1] >= 'a' s[string_index + 1] <= 'z'))
			{
				s[string_index + 1] -= 32;
				break;
			}
		}
	}
	return (s);
}
