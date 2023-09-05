#include <stdio.h>
#include "main.h"
/**
 * file_error - a function that checks if a file is opened and
 * treats the errors.
 * @file_to: destination of file to be copied.
 * @file_from: initial location of the file to be copied.
 * @argv: argument pointer.
 * Written by Jude Augustine.
 * Return: Nothing.
 */
void file_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	if (file_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - a function that copies content of a file from one file another.
 * @argv: argument vector.
 * @argc: argument counter.
 * Return: 0 upon success.
 */
int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	int err_guard;
	ssize_t num_char, num_writn;
	char bufr[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(file_from, file_to, argv);
	num_char = 1024;

	while (num_char == 1024)
	{
		num_char = read(file_from, bufr, 1024);

		if (num_char == -1)
			file_error(-1, 0, argv);
		num_writn = write(file_to, bufr, num_char);
		if (num_writn == -1)
			file_error(0, -1, argv);
	}
	err_guard = close(file_from);
		if (err_guard == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
		}
	err_guard = close(file_to);
	if (err_guard == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
