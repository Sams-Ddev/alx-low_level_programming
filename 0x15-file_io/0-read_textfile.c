#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: filename.
 * @letters: numbers of letters read and printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 * if filename is NULL return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* Variable decLarations */
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	/* returns 0 for filename NULL */
	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
