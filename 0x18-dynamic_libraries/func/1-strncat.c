#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - This concatenates two strings,
 * appending at most 'n' characters
 * from the string pointed to by 'src',
 * to the end of the string pointed to by 'dest'.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source buffer.
 * @n: Maximum number of characters to append from 'src'.
 *
 * Return: Pointer to the resulting string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
return (strncat(dest, src, n));
}
