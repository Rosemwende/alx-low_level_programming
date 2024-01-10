#include "main.h"

/**
 * wildcmp - Compares two strings considering * as a wildcard.
 * @s1: The first string.
 * @s2: The second string with possible wildcards.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 == '\0' || (*s2 == '*' && wildcmp(s1, s2 + 1)))
return (1);
else
return (0);
}

if (*s2 == '*')
{
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

return (0);
}
