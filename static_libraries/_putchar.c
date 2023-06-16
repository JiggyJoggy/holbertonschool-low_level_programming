#include "main.h"
#include <unistd.h>

/**
 * _putchar - entry point
 *
 * description: the character to print
 * c: arg
 *
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
