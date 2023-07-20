#include "main.h"
/**
 * _isupper - prints string
 * @c : integer
 *
 * Return: Always 0 (success)
 */

int _isupper(int c)
{
	char character;
	int response;

	for (character = 65; character <= 90; character++)
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
