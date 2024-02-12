#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints
 * it to the POSIX standard output.
 * @filename: The name of the file to be read.
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could
 * read and print.
 * If the file cannot be opened or read, return 0.
 * If the filename is NULL, return 0.
 * If write fails or does not write the expected
 * amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_d;
ssize_t lenr, lenw;
char *buffer;

if (filename == NULL)
return (0);
file_d = open(filename, O_RDONLY);
if (file_d == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(file_d);
return (0);
}
lenr = read(file_d, buffer, letters);
close(file_d);
if (lenr == -1)
{
free(buffer);
return (0);
}
lenw = write(STDOUT_FILENO, buffer, lenr);
free (buffer);
if (lenr != lenw)
return (0);
return (lenw);
}

