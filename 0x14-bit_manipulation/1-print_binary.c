#include "main.h"

 /**
  * print_binary - prints out binary
  * @n: The numbber to be printed in binary
  */
void print_binary(unsigned long int n)
{
if (n == 0)
_putchar('0');
else
{
	print_bi(n);
}
}

/**
 * print_bi - print the binary representation
 * of a number recursively
 * @n: the decimal input
 * Return: void
 */
void print_bi(unsigned long int n)
{
if (n == 0)
return;
print_bi(n >> 1);
if ((n & 1) == 1)
_putchar('1');
if ((n & 1) == 0)
_putchar('0');
}

