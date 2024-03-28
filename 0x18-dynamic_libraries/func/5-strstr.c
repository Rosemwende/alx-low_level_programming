#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - locates the first occurence
 * of a substring
 * @haystack: the string to seaarch within
 * @needle: the substring to search for
 * Return: A pointer to the beginning of the located
 * substring,or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
return (strstr(haystack, needle));
}
