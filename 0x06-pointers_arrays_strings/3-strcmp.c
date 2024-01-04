#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: negative value if s1 is less than s2,
 *         positive value if s1 is greater than s2,
 *         and 0 if they are equal
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
