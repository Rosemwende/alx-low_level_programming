#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memcpy - It copies 'n' bytes from memory
 * area 'src' to memory area 'dest'.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source buffer.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to 'dest'.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
return (memcpy(dest, src, n));
}
