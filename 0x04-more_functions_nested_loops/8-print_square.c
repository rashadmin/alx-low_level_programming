#include "main.h"
/**
 * print_square - prints string
 * @size : integer
 *
 * Return: Always 0 (success)
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
{
	for (j = 1; j <= size; j++)
{
	for (i = 1; i <= size - 1; i++)
{
	_putchar(35);
}
	_putchar(35);
	_putchar('\n');
}
}
}
