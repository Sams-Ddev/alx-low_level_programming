#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * copy_file - Copy the content of one file to another.
 * @file_from: Source file descriptor
 * @file_to: Destination file descriptor
 * Return: 0 on success, -1 on failure
 */

int copy_file(int file_from, int file_to)
{
	ssize_t r_bytes, w_bytes;
	char buffer[BUFFER_SIZE];

	while ((r_bytes = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		w_bytes = write(file_to, buffer, r_bytes);
		if (w_bytes == -1 || w_bytes != r_bytes)
			return (-1);
	}

	return ((r_bytes == 0) ? 0 : -1);
}

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, various exit codes on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (EXIT_FAILURE);
	}

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		return (EXIT_FAILURE);
	}

	if (copy_file(file_from, file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		close(file_to);
		return (EXIT_FAILURE);
	}

	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (close(file_from) == -1) ? file_from : file_to);
		return (EXIT_FAILURE);
	}

	return (EXIT_SUCCESS);
}

