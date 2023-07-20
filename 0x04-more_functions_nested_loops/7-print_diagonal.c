#include "main.h"
/**
 * print_diagonal - prints string
 * @n : integer
 *
 * Return: Always 0 (success)
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
{
	for (j = 1; j <= n; j++)
{
	for (i = 1; i <= j; i++)
{
	_putchar(32);
}
	_putchar(92);
	_putchar('\n');
}
}
}
