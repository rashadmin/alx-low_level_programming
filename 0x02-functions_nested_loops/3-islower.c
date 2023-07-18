#include <stdio.h>
/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */

int _islower(int c)
{	
	char character;
	for (character=97;character <= 122;character++)
	if (putchar(c)==putchar(character))
	{
	    return (0);
	}
	else
	{
	    return (1);
	}
}
