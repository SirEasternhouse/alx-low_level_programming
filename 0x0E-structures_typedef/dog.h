#ifndef _DOG_H
#define _DOG_H
/**
 *struct dog - defining the of tag datatype
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *
 *Description: dog tag to make dog detail fetching convenient
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
