#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
int i, j;

if (size <= 0)
{
printf("\n");
return;
}

for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);

for (j = 0; j < 10; j++)
{
if (i + j < size)
printf("%02x%02x ", (unsigned char)b[i + j], (unsigned char)b[i + j + 1]);
else
printf("     ");
}

for (j = 0; j < 10; j++)
{
if (i + j < size)
{
char c = b[i + j];
if (c >= ' ' && c <= '~')
printf("%c", c);
else
printf(".");
}
}

printf("\n");
}
}
