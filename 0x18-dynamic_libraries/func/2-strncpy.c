#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - It copies at most 'n' characters
 * from the string 'src' to 'dest'
 * If 'src' is less than 'n' characters long,
 * the remainder of 'dest' is filled
 * with null bytes ('\0') until 'n'
 * characters have been written
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source buffer
 * @n: Maximum number of characters to be copied
 *
 * Return: Pointer to the destination buffer 'dest'
 */
char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
