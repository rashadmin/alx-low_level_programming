#include "main.h"
/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */

int _islower(int c)
{	
	char character;
	int response;
	for (character=97;character <= 122;character++)
	if (c == character)
	{
	    response = 1;
	    break;
	}
	else
	{
	    response =  0;
	    continue;
	}
	return response;
}
