#include "main.h"
/**
 * print_triangle - prints string
 * @size : integer
 *
 * Return: Always 0 (success)
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
{
	for (j = size; j >= 1; j--)
{
	for (i = 1; i < j; i++)
{
	_putchar(32);
}
	for (k = size; k >= j; k--)
{
	_putchar(35);
}
	_putchar('\n');
}
}
}
