#include "main.h"

/**
 * main - prints _putchar 
 *
 * Return: On success 0.
 */
int main(void)
{
	
	int asciiValues[] = {95, 112, 117, 116, 99, 104, 97, 114};
    	int length = sizeof(asciiValues) / sizeof(asciiValues[0]);
    	int i;


    	for (i = 0; i < length; i++) 
    	{
        	_putchar((char)asciiValues[i]);
    	}
    	_putchar('\n');
	return (0);
}	
