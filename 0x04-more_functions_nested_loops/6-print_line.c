#include "main.h"
/**
 * print_line - prints string
 * @n : integer
 *
 * Return: Always 0 (success)
 */

void print_line(int n)
{
	int j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
{
	for (j = 1; j <= n; j++)
{
	_putchar(95);
}
	_putchar('\n');
}
}
