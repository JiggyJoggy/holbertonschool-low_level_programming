#include "variadic_functions.h"

/**
 * print_all - entry point
 * @format: list of types
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int holder, index = 0;
	char *string;
	va_list ap;

	while (format)
	{
		va_start(ap, format);
		while (format[index])
		{
			holder = 1;
			switch (format[index])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
				       	break;
				case 'i':
					printf("%d", va_arg(ap, int));
				       	break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's':
					string = va_arg(ap, char *);
					if (!string)
					{
						string = "(nil)";
					}
					printf("%s", string);
					break;
				default:
					holder = 0;
					break;
			}
			if (format[index + 1] && holder)
			{
				printf(", ");
			}
			index++;
		}
		va_end(ap);
		break;
	}
	printf("\n");
}
