#include "main.h"

/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{	
	int character;
	int count;
	for (count=1;count <=10;count++)
{
	for (character=97;character <= 122;character++) 
	_putchar(character);
	_putchar('\n');
}
}
