#include "main.h"

/**
 * append_text_to_file - entry point
 *
 * description: appends text at the end of a file
 * @filename: pointer to the name of file
 * @text_content: pointer to inside of the file
 *
 * Return: -1 if failed, else return 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	int bytes;

	if (!filename)
	{
		return (-1);
	}

	file_desc = open(filename, O_RDWR | O_APPEND);

	if (file_desc < 0)
	{
		return (-1);
	}

	if (!text_content)
	{
		close(file_desc);
		return (1);
	}

	bytes = write(file_desc, text_content, strlen(text_content));

	if (bytes < 0)
	{
		close(file_desc);
		return (-1);
	}
	close(file_desc);

	return (1);
}
