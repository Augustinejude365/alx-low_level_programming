#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * file_error - a function that checks if a file is opened and treats
 * the errors.
 * @file_to: destination of file to be copied.
 * @file_from: initial location of the file to be copied.
 * @file_from_name: name of the destination to be copied from.
 * @file_to_name: name of the destination to be copied to.
 * Written by Jude Augustine.
 * Return: Nothing.
 */
void file_error(int file_from, int file_to, char *file_from_name, char
		*file_to_name)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
	file_from_name);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
	   file_to_name);
		exit(99);
	}
}

/**
 * copy_file - A function that copies file from one destination to another.
 * @file_from_name: the name of the destination to be copied from.
 * @file_to_name: the name of the destination to be copied to.
 * Return: Nothing upon success.
 */
void copy_file(char *file_from_name, char *file_to_name)
{
	int file_from, file_to;
	ssize_t num_char, num_written;
	char buffer[1024];

	file_from = open(file_from_name, O_RDONLY);
	file_to = open(file_to_name, O_CREAT | O_WRONLY | O_TRUNC |
O_APPEND, 0664);
	file_error(file_from, file_to, file_from_name, file_to_name);

	while ((num_char = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		if (num_char == -1)
		{
			file_error(-1, 0, file_from_name, file_to_name);
		}
		num_written = write(file_to, buffer, num_char);
		if (num_written == -1)
		{
			file_error(0, -1, file_from_name, file_to_name);
		}
	}

	if (num_char == -1)
	{
		file_error(-1, 0, file_from_name, file_to_name);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
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
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
