#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * at a given index
 * @n: A pointer to the number whose bit needs
 * to be set
 * @index: the index of the bit to set,
 * starting from 0
 *
 * Return: 1 if it worked, -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;

if (index > sizeof(unsigned int) * 8)
return (-1);
m = 1;
m = m << index;
*n = ((*n) | m);
return (1);
}
