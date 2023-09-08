#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to POSIX stdout.
 * @filename: filename.
 * @letters: letters is the number of letters it should read and print
 *
 * Return:  actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL)
        return 0;

    int file_descriptor, bytes_read, bytes_written;
    char *buffer;

    /* Open the file for reading*/
    file_descriptor = open(filename, O_RDONLY);
    if (file_descriptor == -1)
        return 0;

    /* Allocate memory for a buffer*/
    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL) {
        close(file_descriptor);
        return 0;
    }

    /* Read from the file*/
    bytes_read = read(file_descriptor, buffer, letters);
    if (bytes_read == -1) {
        close(file_descriptor);
        free(buffer);
        return 0;
    }

    /* Write to standard output */
    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1 || bytes_written != bytes_read) {
        close(file_descriptor);
        free(buffer);
        return 0;
    }

    /* Clean up and return the actual number of letters read and printed */
    close(file_descriptor);
    free(buffer);
    return bytes_written;
}

