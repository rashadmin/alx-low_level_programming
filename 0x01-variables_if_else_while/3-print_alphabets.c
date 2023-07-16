#include <stdio.h>

/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;
	char capletter;

	for (letter = 97; letter <= 122; letter++)
	putchar(letter);
	for (capletter = 65; capletter <= 90; capletter++)
	putchar(capletter);
	putchar('\n');
	return (0);
}
