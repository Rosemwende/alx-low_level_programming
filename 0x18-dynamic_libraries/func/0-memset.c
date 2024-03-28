#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - It fills the first 'n' bytes
 * of the memory area pointed to by 's'
 * with the constant byte 'b'.
 * @s: Pointer to the memory area to fill.
 * @b: The constant byte to fill the memory area with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the memory area 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}
