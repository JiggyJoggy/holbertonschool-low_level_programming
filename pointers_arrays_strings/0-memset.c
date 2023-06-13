#include "main.h"

/**
 * _memset - entry point
 *
 * desciprtion: a function that fills memory with a constant byte
 * @s: area pointed
 * @b: the constant byte
 * @n: fills the first number bytes
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		for (count = 0; s[count] < n; count++)
		{
			s[count] = b;
		}
	}
	return (s);
}
