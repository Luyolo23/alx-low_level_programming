#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @str: string pointer
 * Return: integer
 */
int _strlen(char *str)
{
int x;

for (x = 0; str[x] != 0; x++)
;
return (x);
}
/**
 * _strlenc - strlen function but applied for constant char pointer str
 * @str: char pointer
 * Return: integer
 */
int _strlenc(const char *str)
{
int x;
for (x = 0; str[x] != 0; x++)
;
return (x);
}
