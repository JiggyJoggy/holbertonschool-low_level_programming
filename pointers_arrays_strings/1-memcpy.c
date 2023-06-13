#include "main.h"

/**
 * _memcpy - entry point
 *
 * description: copies memory area
 * @dest: destination where to end
 * @src: where were getting it from
 * @n: number unsigned int
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	int count;

	for (count = 0; count < n; count++)
	{
		cdest[count] = csrc[count];
	}
	return (dest);
}
