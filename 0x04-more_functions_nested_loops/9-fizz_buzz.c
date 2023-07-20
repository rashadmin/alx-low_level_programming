#include "main.h"
#include <stdio.h>
/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
{
	if (j % 3 == 0 && j % 5 == 0)
{
	printf("FizzBuzz");
}
	else if (j % 3 == 0)
{
	printf("Fizz");
}
	else if (j % 5 == 0)
{
	printf("Buzz");
}
	else if (j % 3 == 0 && j % 5 == 0)
{
	printf("FizzBuzz");
}
	else
{
	printf("%d", j);
}
	printf(" ");
}
	printf("\n");
	return (0);
}
