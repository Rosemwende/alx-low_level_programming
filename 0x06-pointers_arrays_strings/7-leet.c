#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string
 *
 * Return: pointer to the resulting string
 */
char *leet(char *str)
{
char *ptr = str;
char leet_replace[] = {'a', 'e', 'o', 't', 'l'};
char leet_replace_upper[] = {'A', 'E', 'O', 'T', 'L'};
char leet_code[] = {'4', '3', '0', '7', '1'};
int i;

while (*ptr)
{
for (i = 0; i < 5; i++)
{
if (*ptr == leet_replace[i] || *ptr == leet_replace_upper[i])
{
*ptr = leet_code[i];
break;
}
}
ptr++;
}

return (str);
}
