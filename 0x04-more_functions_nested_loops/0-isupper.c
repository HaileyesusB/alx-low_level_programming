#include "stdio.h"

/**
 * _isupper - checks for uppercase letter
 * @c: character to check the case
 * Return: 1 if c is uppercase , 0 otherwise
 **/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (0);
return (1);
}
