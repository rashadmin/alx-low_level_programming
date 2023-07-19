#include "main.h"

/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */

void jack_bauer(void)
{
	int i = 0;
	int min_1=48;
	int min_2=48;
	int hr_1=48;
	int hr_2=48;
	int count = 0;
	if (i==0){
      	 _putchar(hr_1);
       	 _putchar(hr_2);
       	 _putchar(58);
       	 _putchar(min_1);
       	 _putchar(min_2+count);
       	 _putchar('\n');
	}
	for (i=1;i<=1439;i++){
        count = (i%10);
        if (count==0){
	    if (min_1 % 53 == 0){
		min_1=48;
		if (hr_2 % 57==0){
		    hr_2 = 48;
		    hr_1++;
		    }
		else{
	            hr_2++;
		}
		}
	    else{
		min_1++;
		}	
	}	
	_putchar(hr_1);
	_putchar(hr_2);	
	_putchar(58);
	_putchar(min_1);
        _putchar(min_2+count);
	_putchar('\n'); 
	}
}
