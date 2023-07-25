#include "main.h"
#include <string.h>
/**
 * _puts - prints string
 * @str : integer
 *
 * Return: Always 0 (success)
 */

void _puts(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i <= length; i++)
{
	_putchar(*(str + i));
}
	_putchar('\n');
}
