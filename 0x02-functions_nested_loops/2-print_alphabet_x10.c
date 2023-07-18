#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

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
	putchar(character);
	putchar('\n');
}
}
