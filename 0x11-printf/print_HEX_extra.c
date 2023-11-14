#include "main.h"
/**
 * print_HEX_extra - converts to HEX
 * @num: number to be printed
 * Return: counter
 */

int print_HEX_extra(unsigned int num)
{
int x; 
int counter = 0;
int *array;
unsigned int tem = num;

while (num / 16 != 0)
{
num = num / 16;
counter++;
}
counter++;
array = malloc(counter * sizeof(int));

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
