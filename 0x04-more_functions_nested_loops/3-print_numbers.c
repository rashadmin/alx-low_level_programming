#include "main.h"
/**
 * print_numbers - prints string
 *
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
	char character;

	for (character = 48 ; character <= 57; character++)
{
	_putchar(character);
}
	_putchar('\n');
}
