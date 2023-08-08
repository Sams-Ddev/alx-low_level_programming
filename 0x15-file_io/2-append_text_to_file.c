#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file() -  appends text at the end of a file.
 * @filename: function arguments.
 * @text_content: store text content.
 * If filename is NULL return -1
 *
 * Return; 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1); /* Nothing to append, but file exists */

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1); /* if Unable to open the file for appending */

	len = 0;

	while (text_content[len] != '\0')
		len++;

	bytes_written = write(fd, text_content, len);

	close(fd);

	if (bytes_written == len)
		return (1); /* Successful append */
	else
		return (-1); /* Error while writing */
}

