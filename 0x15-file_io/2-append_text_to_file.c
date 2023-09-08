#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h" // Include your header file here

int append_text_to_file(const char *filename, char *text_content) {
    if (filename == NULL)
        return -1;

    int file_descriptor, write_result;

    // Open the file for appending, if it doesn't exist, return -1
    file_descriptor = open(filename, O_WRONLY | O_APPEND);
    if (file_descriptor == -1)
        return -1;

    // If text_content is not NULL, append it to the file
    if (text_content != NULL) {
        write_result = write(file_descriptor, text_content, strlen(text_content));
        if (write_result == -1) {
            close(file_descriptor);
            return -1;
        }
    }

    // Close the file and return success (1)
    close(file_descriptor);
    return 1;
}

