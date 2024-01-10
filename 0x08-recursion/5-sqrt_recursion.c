#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number whose square root is to be calculated.
 *
 * Return: The natural square root of the number, or -1 if it does not have one
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

if (n == 0 || n == 1)
return (n);

return (calculate_sqrt(n, 1));
}

/**
 * calculate_sqrt - Helper function to recursively calculate the square root.
 * @n: The number whose square root is to be calculated.
 * @i: The current value to check as a possible square root.
 *
 * Return: The natural square root of the number, or -1 if it does not have one
 */
int calculate_sqrt(int n, int i)
{
if (i * i > n)
return (-1);

if (i * i == n)
return (i);

return (calculate_sqrt(n, i + 1));
}
