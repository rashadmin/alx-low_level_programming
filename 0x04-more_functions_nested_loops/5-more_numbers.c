#include "main.h"
/**
 * more_numbers - prints string
 *
 * Return: Always 0 (success)
 */

void more_numbers(void)
{
	char i;
	int j;
	int new;

	for (j = 0; j <= 9; j++)
{
	for (i = 0; i < 15; i++)
{
	new = i % 10;
	if (i >= 10)
	{
	_putchar(49);
	}
	_putchar(new + 48);
}
	_putchar('\n');
}
}
