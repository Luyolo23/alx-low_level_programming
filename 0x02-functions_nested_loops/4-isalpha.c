#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: funtion parameter
 * Return: 1 and 0
 */

int _isalpha(int c)
{

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
{
return (1);
}
return (0);
}
