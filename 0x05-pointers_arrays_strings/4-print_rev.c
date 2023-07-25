#include "main.h"
#include <string.h>
/**
 * print_rev - prints string
 * @s : integer
 *
 * Return: Always 0 (success)
 */

void print_rev(char *s)
{
	int i;
	int length = strlen(s);

	for (i = length; i >= 0; i--)
{
	_putchar(*(s + i));
}
	_putchar('\n');
}
