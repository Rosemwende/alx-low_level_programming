#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *str)
{
char *ptr = str;
int capitalize = 1;
/* Flag to indicate whether the next character should be capitalized */

while (*ptr)
{
if (capitalize && (*ptr >= 'a' && *ptr <= 'z'))
{
*ptr = *ptr - 'a' + 'A';
capitalize = 0;
}

if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
*ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' ||
*ptr == '?' || *ptr == '"' || *ptr == '(' || *ptr == ')' ||
*ptr == '{' || *ptr == '}')
{
capitalize = 1;
}

ptr++;
}

return (str);
}
