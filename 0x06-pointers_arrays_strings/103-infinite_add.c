#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number as a string
 * @n2: second number as a string
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum, digit;
int i, j;

while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;

if (len1 + 1 > size_r || len2 + 1 > size_r)
return (0);

r[size_r - 1] = '\0';
i = len1 - 1;
j = len2 - 1;

while (i >= 0 || j >= 0 || carry)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';

digit = sum % 10;
carry = sum / 10;

r[size_r - 2] = digit + '0';
size_r--;

i--;
j--;
}

return (r + size_r);
}
