#include <stdio.h>
/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */

int _islower(int c)
{	
	char character;
	int count;
	for (character=97;character <= 122;character++)
	if (putchar(c)==putchar(character))
	{
	    return (0);
	}
	else
	{
	    return (1);
	}
	putchar(character);
	putchar('\n');
}

int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
