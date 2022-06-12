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
	dog_t *p;
	int len_name = 0, len_owner = 0, i;

	p = malloc(sizeof(*p));
	if (p == NULL || !(name) || !(owner))
	{
		free(p);
		return (NULL);
	}

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;
	p->name = malloc(len_name + 1);
	p->owner = malloc(len_owner + 1);

	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
		p->name[i] = name[i];
	p->name[i] = '\0';
	p->age = age;
	for (i = 0; i < len_owner; i++)
		p->owner[i] = owner[i];
	p->owner[i] = '\0';

	return (p);
}
