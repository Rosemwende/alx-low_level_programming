#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the sum of the even-valued terms,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long int first = 1, second = 2, next;

printf("%ld, %ld", first, second);

for (int i = 2; i < 50; i++)
{
next = first + second;
printf(", %ld", next);

first = second;
second = next;
}

printf("\n");

return (0);
}
