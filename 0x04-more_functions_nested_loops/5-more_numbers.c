#include <unistd.h>
#include "main.h"

/**
 *print_numbers - print numbers from 0-9
 *
 * Return: 0 indicate success
 */

void more_numbers(void)
{
        int i;
	int j;
	int k = 0;
	 
	
	while(k <= 9)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(i + '0');
		}
	
		for (j = 1; j < 5; j++)
		{
			if (j != 2 && j != 3 && j != 4 && j != 5)
			{
				_putchar(j + '0');
			}
		}
		_putchar('\n');
		k++;
	}
}
