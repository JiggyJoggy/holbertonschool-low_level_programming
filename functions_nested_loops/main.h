int _putchar(char c);

void print_alphabet(void);

int main(void)
{
	char start = 'a';
	char end = 'z';

	char letter = start;

	while (letter <= end)
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
