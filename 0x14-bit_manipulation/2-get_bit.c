#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to extract the bit from
 * @index: the index of the bit to get, starting from 0.
 * Return: integer 1 or 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;

if (index > sizeof(size_t) * 8)
return (-1);

for (i = 0; i < index; i++)
n = n >> 1;
return ((n & 1));
}
