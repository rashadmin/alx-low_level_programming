#include <stdio.h>

/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 97; letter <= 122; letter++)
	if (letter != 113 && letter != 101)
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
