#include <stdio.h>

/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int letter;
	int capletter;

	for (letter = 48; letter <= 57; letter++)
	{
	for (capletter = 48; capletter <= 57; capletter++)
        {
	putchar(letter);
	putchar(capletter);
	putchar(44);
	putchar(32);
	}
	}
	return (0);
}
