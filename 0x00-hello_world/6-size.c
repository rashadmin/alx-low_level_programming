#include <stdio.h>
/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int integerType;
float floatType;
double doubleType;
char charType;

    /* Sizeof operator is used to evaluate the size of a variable */
printf("Size of char: %ld byte(s)\n", sizeof(char));
printf("Size of int: %ld byte(s)\n", sizeof(int));
printf("Size of long int: %ld byte(s)\n", sizeof(long int));
printf("Size of long long int: %ld byte(s)\n", sizeof(long long int));
printf("Size of float: %ld byte(s)\n", sizeof(float));

return (0);
}
