#include "dog.h"
/**
 *init_dog - initializing dog tag
 *@d: initializer
 *@name: name of dog
 *@age: how old is the dog
 *@owner: who is the owner
 *
 *Return: none
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
