#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file -A function that appends text at the end of
 * an existing file.
 * @filename: name of the file.
 * @text_content: content to be added to the file.
 * Written by Augustine Jude.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, num_letters, rturn_write;

	if (filename == NULL)
	{
		return (-1);
	}

	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		num_letters = strlen(text_content);
		rturn_write = write(file_desc, text_content, num_letters);
		if (rturn_write == -1)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);
	return (1);
}
