#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

void check_Io_stat(int stat, int fd, char *filename, char mode);
/**
 * main - Copies the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 * Return: 0 on success, or the corresponding exit code on failure.
 */
int main(int argc, char *argv[])
{
int src, dest, n_read = 1024, wrote, close_src, close_dest;
unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
char buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s", "usage: cp file_from file_to\n");
exit(97);
}
src = opeen(argv[1], O_RDONLY);
CHECK_IO_STAT(src, -1, argv[1], 'o');
dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
while (n_read == 1024)
{
n_read = read(src, buffer,  sizeof(buffer));
if (n_read == -1)
check_IO_stat(-1, -1, argv[1], '0');
wrote = write(dest, buffer, n_read);
if (wrote == -1)
check_IO_stat(-1, -1, argv[2], 'w');
}
close_src = close(src);
check_IO_stat(close_src, src, NULL, 'c');
close_dest = close(dest);
check_IO_stat(close_dest, dest, NULL, 'c');
return (0);
}

/**
 * check_IO_stat - function checks if a file
 * can be opened or closed
 * @stat: file descriptor of file to be opened
 * @filename: name of the file
 * @mode: closing or opening
 * @fd: file descriptor
 *
 * Return: void
 */
void check_Io_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'c' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
exit(100);
}
else if (mode == 'o' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: can't read from file %s\n", filename);
exit(98);
}
else if (mode == 'w' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: can't write %s\n", filename);
exit(99);
}
}



