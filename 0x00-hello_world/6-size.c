#include <stdio.h>
/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */

int main(void)
{
    /* Sizeof operator is used to evaluate the size of a variable */
printf("Size of char: %d byte(s)\n", (unsigned long)sizeof(char));
printf("Size of int: %d byte(s)\n", (unsigned long)sizeof(int));
printf("Size of long int: %d byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of long long int: %d byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of float: %d byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
