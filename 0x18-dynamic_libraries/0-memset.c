#include "main.h"
/**
 * _memset - block of memory with a specific value
 * @s: address of memory to be filled
 * @b: the wanted value
 * @n: number of bytes to be changed
 *
 * Return: change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)

{
int a = 0;
for (; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}
