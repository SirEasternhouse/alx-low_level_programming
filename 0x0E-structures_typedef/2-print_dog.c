#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_dog - print the strcut dog datatype
 *@d: element to print
 *
 *
 *Return: struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
