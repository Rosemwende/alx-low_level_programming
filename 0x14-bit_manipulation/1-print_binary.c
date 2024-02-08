#include "main.h"

 /**
  * print_binary - prints out binary equivalent to
  * a decimal number
  * Description: This function takes an unsigned long
  * int and prints its binary representation to
  * the standard output.
  * @n: The numbber to be printed in binary
  */
void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int current;

for (i = 60; i >= 0; i--)
{
current = n >> i;

if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}


