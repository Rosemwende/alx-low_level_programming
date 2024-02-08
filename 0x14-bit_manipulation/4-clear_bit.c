#include "main.h"

/**
 * clear_bit - sets the value of a bit
 * to 0 at a given index
 * @n: A pointer to the number whose bits needs to be cleared.
 * @index: position to change bit to 0
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;

m = 1;
m = m << index;
if (index > sizeof(unsigned long int) * 8 || n == NULL)
return (-1);
if (((*n >> index) & 1) == 1)
*n = m ^ *n;

return (1);
}
