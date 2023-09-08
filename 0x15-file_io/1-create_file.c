#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

int create_file(const char *filename, char *text_content) {
    if (filename == NULL)
        return -1;

    int file_descriptor, write_result;

    /*Open or create the file with permissions rw-------*/
    file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (file_descriptor == -1)
        return -1;

    /*If text_content is not NULL, write it to the file*/
    if (text_content != NULL) {
        write_result = write(file_descriptor, text_content, strlen(text_content));
        if (write_result == -1) {
            close(file_descriptor);
            return -1;
        }
    }

    /* Close the file and return success (1)*/
    close(file_descriptor);
    return 1;
}

