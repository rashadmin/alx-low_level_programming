#include "main.h"
/**
 * _islower - prints string
 * @c : integer
 *
 * Return: Always 0 (success)
 */

int _islower(int c)
{
	char character;
	int response;

	for (character = 97; character <= 122; character++)
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
	return (response);
}
