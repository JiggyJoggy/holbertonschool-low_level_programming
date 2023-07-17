#include "main.h"

/**
 * create_file - entry point
 *
 * description: creates a file
 * @filename: pointer to the filename
 * @text_content: pointer to your content
 *
 * Return: -1 if fails, else return 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc;

	if (!text_content)
	{
		text_content = "";
	}

	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file_desc < 0)
	{
		return (-1);
	}

	if (text_content)
	{
		write(file_desc, text_content, strlen(text_content));
	}
	close(file_desc);

	return (1);
}
