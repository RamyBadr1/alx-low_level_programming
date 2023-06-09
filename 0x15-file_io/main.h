#ifndef MY_MAIN_H
#define MY_MAIN_H

/* Define buffer size for a task */
#define BUFFER_SIZE 1024

/*
 * Description: Header file containing all  prototypes
 */

/* Libraries Used */
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stddef.h>

/* Prototypes */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
