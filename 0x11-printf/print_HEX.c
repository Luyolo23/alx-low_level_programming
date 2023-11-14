#include "main.h"
/**
 * print_HEX - prints hexdecimal numbers
 * @val: value to be converted.
 * Return: counter.
 */

int print_HEX(va_list val)
{
int x, counter = 0;
int *array;
unsigned int num = va_arg(val, unsigned int);
unsigned int tem = num;

while (num / 16 != 0)
{
num = num / 16;
counter++;
}
counter++;
array = malloc(sizeof(int) * counter);

for (x = 0; x < counter; x++)
{
array[x] = tem % 16;
tem = tem / 16;
}
for (x = counter - 1; x >= 0; x--)
{
if (array[x] > 9)
array[x] = array[x] + 7;
_putchar(array[x] + '0');
}
free(array);
return (counter);
}
