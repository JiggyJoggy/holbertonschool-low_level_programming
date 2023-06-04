#include "main.h"

/**
 * sawp_int - entry point
 *
 * description: switching the values of two ints
 * @a: int pointer 1
 * @b: int pointer 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int ptr_a;

	ptr_a = *a;
	*a = *b;
	*b = ptr_a;
}
