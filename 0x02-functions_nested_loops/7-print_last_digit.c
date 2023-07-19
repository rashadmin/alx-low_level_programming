#include "main.h"

/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */

int print_last_digit(int n)
{	
	int last;
	if (n > 0)
	{
	last = n % 10;
	_putchar(last);
	}
	else if (n==0)
	{
	last = 0;
	_putchar(last);
	}
	else
	{
	n*=-1;
	last = n % 10;
	_putchar(last);
	}
	_putchar(last);
	return last;
}
