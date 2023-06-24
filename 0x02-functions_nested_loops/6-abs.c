#include <unistd.h>
#include "main.h"

/**
 *_abs - compute the abs value of integer
 *@n: The character to print
 *
 * Return: success =1 & -1
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = -i;
	}
	return (i);
}
