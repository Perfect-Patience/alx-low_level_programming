#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - creates a new dog
 *@name : name of dog
 *@age : age of dog
 *@owner : owner of dog
 *Return: pointer to new dog, otherwise NULL
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int len1 = 0, len2 = 0, i;

	p = malloc(sizeof(*p));
	if (p == NULL || !(owner) || !(name))
	{
		free(p);
	k	return (NULL);
	}
	while (name[len1])
		len1++;
	while (owner[len2])
		len2++;
	p->name = malloc(len1 + 1);
	p->owner = malloc(len2 + 1);
	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
	}
	p->age = age;
	for (i = 0; i < len1; i++)
		p->name[i] = name[i];
	p->name[i] = '\0';

	for (i = 0; i < len2; i++)
		p->owner[i] = owner[i];
	p->owner[i] = '\0';
	return (p);
}
