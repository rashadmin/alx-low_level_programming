#include <stdio.h>
#include "main.h"
/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{	
	int character;
	for (character=97;character <= 122;character++)
	{ 
	_putchar(character);
	}
	_putchar('\n');
}
