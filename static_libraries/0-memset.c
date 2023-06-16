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
	unsigned char *p = (unsigned char *)s;

	while (n--)
	{
		*p++ = (unsigned char) b;
	}
	return (s);
}
