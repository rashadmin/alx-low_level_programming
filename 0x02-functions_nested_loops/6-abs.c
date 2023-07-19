#include "main.h"
/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */

int _abs(int n)
{	
	int response;
	if (n > 0)
	{
	    response = n;
	}
	else if(n==0)
        {
	    response = 0;
        }
	else if(n<0)
        {  
	    response = n*-1;
        }
	return response;
}
