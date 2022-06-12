#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - created a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owner
 *
 *Return: pointer to new dog, otherwise null
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *p;

	p = malloc(sizeof(struct dog));
	if (p == NULL)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
