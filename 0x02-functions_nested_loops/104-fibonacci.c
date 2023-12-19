#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers separated by commas.
 *              Starts with 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned int first = 1, second = 2, next;

printf("%u, %u", first, second);

for (i = 2; i < 98; i++)
{
next = first + second;
printf(", %u", next);

first = second;
second = next;
}

printf("\n");

return (0);
}
