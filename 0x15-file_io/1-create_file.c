#include "main.h"

/**
 * create_file - A function that creates a file and writes the given
 * content into it.
 * @filename: The name of the file to be created.
 * @text_content: The content to be copied into the file.
 * Return: Upon success, 1. Otherwise, -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, num_letters, rturn_write;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;

	rturn_write = (write(file_desc, text_content, num_letters));

	if (rturn_write == -1)
	{
		close(file_desc);
		return (-1);
	}

	close(file_desc);
	return (1);
}
