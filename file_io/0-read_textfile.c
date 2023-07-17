#include "main.h"

/**
 * read_textfile - entry point
 *
 * description: reads a text file and prints it
 * to the POSIX standard output
 * @filename: pointer to the filename
 * @letters: number of letters it reads and prints
 *
 * Return: 0 if fails, else print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nletters;
	int file;
	char *text;

	if (!filename)
		return (0);
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);
	file = open(filename, 0_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	nletters = read(file, text, sizeof(char) * letters);
	if (nletters == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	nletters = write(STDOUT_FILENO, text. nletters);
	if (nletters == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	free(text);
	close(file);

	return (nletters);
}
