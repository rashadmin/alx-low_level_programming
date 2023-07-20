#include "main.h"
/**
 * _isalpha - prints string
 * @c : integer
 *
 * Return: Always 0 (success)
 */

int _isalpha(int c)
{
	char character;
	int response = 0;

	for (character = 97 ; character <= 122; character++)
	if (c == character)
{
	response += 1;
	break;
}
	for (character = 65; character <= 90; character++)
	if (c == character)
	{
	response += 1;
	break;
}
	return (response);
}
