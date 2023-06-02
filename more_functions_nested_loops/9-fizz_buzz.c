#include <stdio.h>

/**
 * main - entry point
 *
 * description: print 1 to 100 with fizzbuzz in
 *
 * Return: Always 1
 */

int main(void)
{
	int index;

	for (index = 0; index <= 100; index++)
	{
		if (index % 3 == 0)
		{
			printf("Fizz");
		}
		else if (index % 5 == 0)
		{
			printf("Buzz");
		}
		else if (index % 3 == 0 && index % 5 == 0)
		{
			printf("FizzBuzz)");
		}
		else
		{
			printf(index);
		}
	}
	return (1);
}
