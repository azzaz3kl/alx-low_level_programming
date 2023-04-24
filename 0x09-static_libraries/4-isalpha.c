#include "main.h"

/**
 * _isalpha - Entry poin
 * @c: The received character
 * Return: 1 if true. 0 if false
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
