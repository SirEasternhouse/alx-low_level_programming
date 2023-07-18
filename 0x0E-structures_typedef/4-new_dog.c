#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - determine the lenght of a string
 * @s: string length to be determined
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * *_strcpy - copy a string from source to destination
 * @src: the source of the string to be copied
 * @dest: destination to copy the string to
 *
 * Return: the destination
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
/**
 *new_dog - addition of new dog
 *@name: name of dog
 *@age: age of dog
 *@owner : owner of dog
 *
 *Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = (char *)malloc(_strlen(name) + 1);
	newDog->owner = (char *)malloc(_strlen(owner) + 1);

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	_strcpy(newDog->name, name);
	_strcpy(newDog->owner, owner);

	newDog->age = age;

	return (newDog);
}
