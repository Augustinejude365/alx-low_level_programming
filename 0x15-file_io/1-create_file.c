#include "main.h"
/**
 * create_file - a function that creates and writes into  a file,
 * as well as copy its content.
 * @text_content: the content to be copied into the file.
 * @filename: the file name to be created.
 * Written by Jude Augustine.
 * Return: upon success 1, otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int rturn_write, file_desc, num_lters;

	if (!filename)
	{
		return (-1);
	}
	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (file_desc == -1)
		{
			return (-1);
		}
	if (text_content == NULL)
		text_content = "";
	for (num_lters = 0; text_content[num_lters]; num_lters++)
		;
	rturn_write = write(file_desc, text_content, num_lters);
	if (rturn_write == -1)
		return (-1);
	close(file_desc);
	return (1);
}
