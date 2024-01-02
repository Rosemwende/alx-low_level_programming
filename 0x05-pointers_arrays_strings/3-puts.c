#include "main.h"

/* Declaration of _putchar function */
void _putchar(char c);
/**
 * _puts - prints a string
 * @str: The string to print
 * Return: void
 */

void _puts(char *str)
{

for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}

