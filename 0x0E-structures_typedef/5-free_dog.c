#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_dog - free the momory of the dog strcut and functions
 *@d: pointer to free
 *
 *Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
