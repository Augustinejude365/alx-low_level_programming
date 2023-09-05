#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of
 * an already existing file.
 * @text_content: the content to be added to the file.
 * @filename: the name of the file to be appended content to.
 * Written by Augustine Jude.
 * Return: Upon succes 1, otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, num_lters, rturn_write;

	if (!filename)
	{
		return (-1);
	}
	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (num_lters = 0; text_content[num_lters]; num_lters++)
			;
		rturn_write = write(file_desc, text_content, num_lters);
		if (rturn_write == -1)
			return (-1);
	}
	close(file_desc);
	return (1);
}

