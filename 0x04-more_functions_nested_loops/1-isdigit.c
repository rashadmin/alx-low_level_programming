#include "main.h"
/**
 * _isdigit - prints string
 * @c : integer
 *
 * Return: Always 0 (success)
 */

int _isdigit(int c)
{
	char character;
	int response = 0;

	for (character = 48 ; character <= 57; character++)
	if (c == character)
{
	response += 1;
	break;
}
	return (response);
}
