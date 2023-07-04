#include "variadic_functions.h"

/**
 * print_strings - entry point
 *
 * description: function that prints strings, followed by a new line
 * @separator: string printed between str
 * @n: number of strings passed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *string;
	va_list ap;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(ap, char *);

		if (!string)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (index < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
