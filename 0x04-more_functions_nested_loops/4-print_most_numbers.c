#include "main.h"
/**
 * print_most_numbers - prints string
 *
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
	char character;

	for (character = 48 ; character <= 57; character++)
{
	if (character != 50 && character != 52)
{
	_putchar(character);
	}
}
	_putchar('\n');
}
