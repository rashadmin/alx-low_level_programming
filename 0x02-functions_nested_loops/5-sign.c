#include "main.h"
/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */

int print_sign(int n)
{	
	int response = 0;
	if (n > 0)
	{
	    response += 1;
	    _putchar('+');
	}
	else if(n==0)
        {
            _putchar('0');
        }
	else if(n<0)
        {  
	    response -=1;
            _putchar('-');
        }
	return response;
}
