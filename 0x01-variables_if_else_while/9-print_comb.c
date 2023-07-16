#include <stdio.h>

/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 48; letter <= 57; letter++)
	{
	putchar(letter);
	if (letter != 57)
	{
	putchar(44);
	putchar(32);
	}
	}
	putchar('\n');
	return (0);
}
