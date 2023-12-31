#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number
 *
 * Return: the largest prime factor
 */
long largest_prime_factor(long n)
{
long i;

while (n % 2 == 0)
{
n /= 2;
}

for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
n /= i;
}
}

return (n);
}

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
long number = 612852475143;
long largest_prime;

largest_prime = largest_prime_factor(number);

printf("%ld\n", largest_prime);

return (0);
}
