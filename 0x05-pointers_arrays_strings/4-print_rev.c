#include "main.h"
#include <stdio.h>

/* Declaration of _putchar function */
void _putchar(char c);

/**
 * print_rev - prints in reverse
 * @s: The string to print
 * Return: void
 */

void print_rev(char *s)
{
int c = 0;
while (s[c] != '\0')
{
c++;
}

for (c -= 1; c >= 0; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
