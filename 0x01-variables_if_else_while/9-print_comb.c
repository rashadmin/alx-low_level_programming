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

	for (letter = 48; letter <= 57; letter++)
        {
	putchar(letter);
	putchar(",");
	putchar(" ");
	}	
	putchar('\n');
	return (0);
}
