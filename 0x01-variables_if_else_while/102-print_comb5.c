#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)

{
	int p, q;

	for (p = 0; p <= 98; p++)
	{

	for (q = p + 1; q <= 99; q++)
	{
	putchar((p / 10) + '0');
	putchar((p % 10) + '0');
	putchar(' ');
	putchar((q / 10) + '0');
	putchar((q % 10) + '0');
	if (p == 98 && q == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	purchar('\n');
	return (0);
}
