#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;

for (digit = 0; digit <= 9; digit++)
{
putchar(digit + '0');

if (digit < 9)
{
putchar(',');
putchar(' ');

if (digit == 9 - 1)
{
putchar('\n');
}
}
}

return (0);
}
