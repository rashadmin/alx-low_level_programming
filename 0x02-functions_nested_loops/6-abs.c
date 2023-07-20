#include "main.h"
/**
 * _abs - prints string
 * @n : integer
 *
 * Return: Always 0 (success)
 */

int _abs(int n)
{
	int response;

	if (n > 0)
{
	response = n;
}
	else if (n == 0)
{
	response = 0;
}
	else if (n < 0)
{
	response = n = -n;
}
	return (response);
}
