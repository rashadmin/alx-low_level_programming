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
	}
	else if (n==0)
	{
	last = 0;
	}
	else
	{
	n*=-1;
	last = n % 10;
	}
	_putchar(last+'0'); 
	return (last);
}
