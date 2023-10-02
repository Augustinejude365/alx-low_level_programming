#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it.
 * to the POSIX standard output.
 * @letters: the number of letters to be printed.
 * @filename: the file name to be read.
 * Written by Jude Augustine.
 * Return: number of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_read, num_wrtn;
	char *bufr;
	int file_desc;

	if (!filename)
	{
		return (0);
	}
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		return (0);
	}
	bufr = malloc(sizeof(char) * letters);
	if (bufr == NULL)
	{
		return (0);
	}
	num_read = read(file_desc, bufr, letters);
	num_wrtn = write(STDOUT_FILENO, bufr, num_read);
	close(file_desc);
	free(bufr);

	return (num_wrtn);
}
