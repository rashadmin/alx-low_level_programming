#include <main.h>

/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{	
	char character;
	for (character=97;character <= 122;character++) 
	putchar(character);
	putchar('\n');
}
