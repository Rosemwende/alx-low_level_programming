#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - Checks for an uppercase character
 * @c: The character to be checked
 *
 * Return: 1 if 'c' is an uppercase letter, 0 is not
 */
int _isupper(int c)
{
return (c >= 'A' && c <= 'Z');
}
