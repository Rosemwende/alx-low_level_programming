#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: input string
 *
 * Return: pointer to the resulting string
 */
char *rot13(char *str)
{
char *ptr = str;
char rot13_table[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13_replace[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int index;

while (*ptr)
{
index = 0;
while (rot13_table[index] && rot13_table[index] != *ptr)
index++;

if (rot13_table[index] == *ptr)
*ptr = rot13_replace[index];

ptr++;
}

return (str);
}
