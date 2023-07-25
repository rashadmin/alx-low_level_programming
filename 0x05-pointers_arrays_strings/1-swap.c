#include "main.h"
/**
 * swap_int - prints string
 * @a : integer
 * @b : integer
 *
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp  =  *a;
	*a = *b;
	*b = temp;
}
