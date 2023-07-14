#include <stdio.h>
/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */

int main(void)
{
    /* Sizeof operator is used to evaluate the size of a variable */
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
