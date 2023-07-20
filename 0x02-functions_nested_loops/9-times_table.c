#include "main.h"

/**
 * main - prints string
 *
 * Return: Always 0 (success)
 */

void times_table(void)
{
    int row;
    int col;
    int count = 0;
    for (row=1;row<=11;row++){
	for (col=1;col<=11;col++){
	    if (count%11 != 0){
	    _putchar(48+row);
	    _putchar(44);
	    _putchar(32);
		}
	    else{
	    _putchar('\n');
	}
	count+=1;

}
}
}
