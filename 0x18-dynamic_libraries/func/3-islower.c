#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _islower - This checks for a lowercase character.
 * @c: The character to be checked.
 *
 * Return: 1 if 'c' is a lowercase letter,
 * 0 if is not.
 */
int _islower(int c)
{
return (c >= 'a' && c <= 'z');
}
