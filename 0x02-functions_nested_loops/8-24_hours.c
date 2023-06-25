#include <unistd.h>
#include "main.h"

/**
 *jack_bauer - compute the abs value of integer
 *
 *
 * Return: success =1 & -1
 */

void jack_bauer(void)
{
	int  i, j, k, l;
	
	for (i =0; i < 3; i++)
	{
		j = 0;
		while (j < 10)
		{
			if (i == 2 && j == 4)
			{
				break;
			}
			/*_putchar('0' + i);
			_putchar('0' + j);
			_putchar('\n');*/
			
			for (k = 0; k < 6; k++)
			{
				l = 0;
				while (l < 10)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
					l++;
				}
			}
			j++;
		}
	}
}
