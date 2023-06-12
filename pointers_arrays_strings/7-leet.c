#include "main.h"

/**
 * leet - entry point
 *
 * description: encodes a string into 1337
 * @c: takes a string char
 *
 * Return: char
 */

char *leet(char *c)
{
	char encode[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char encode_nums[5] = {'4', '3', '0', '7', '1'};
	int count, arr_index, encode_len;

	encode_len = 10;

	for (count = 0; c[count] != '\0'; count++)
	{
		for (arr_index = 0; arr_index < encode_len; arr_index++)
		{
			if (c[count] == encode[arr_index])
			{
				c[count] = = encode_nums[arr_index];
			}
		}
	}
	return (c);
}
