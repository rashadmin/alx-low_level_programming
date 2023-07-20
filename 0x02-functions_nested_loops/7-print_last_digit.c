#include "main.h"

/**
 * print_last_digit - prints string
 * @n : integer
 *
 * Return: Always 0 (success)
 */

int print_last_digit(int n)
{
	int last;

	if (n > 0)
	{
	last = n % 10;
	}
	else if (n == 0)
	{
	last = 0;
	}
	else
	{
	n = -n;
	last = n % 10;
	last = -last
	}
	_putchar(last + '0');
	return (last);
}
