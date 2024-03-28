#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - This calculates the length
 * of the initial segment of 's'
 * consisting of only characters from 'accept'.
 * @s: The string to be searched.
 * @accept: The string containing characters to match.
 *
 * Return: The length of the initial segment
 * of 's' consisting of only
 * characters from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
