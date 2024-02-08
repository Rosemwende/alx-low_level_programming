#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * to get from one number to another
 * @n: The first number
 * @m: The second number
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int result;
unsigned long int count;

result = n ^ m;
for (count = 0; result > 0;)
{
if ((result & 1) == 1)
count++;
result = result >> 1;
}
return (count);
}
