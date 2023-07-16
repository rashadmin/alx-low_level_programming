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
	{
	putchar(letter);
	}
	putchar('\n');
	return (0);
}
