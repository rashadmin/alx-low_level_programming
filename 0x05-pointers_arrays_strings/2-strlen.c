#include "main.h"
#include <string.h>
/**
 * _strlen - prints string
 * @s : integer
 *
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
{
	i++;
}
	return (i);
}
