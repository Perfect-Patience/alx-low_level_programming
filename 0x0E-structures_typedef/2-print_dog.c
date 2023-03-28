#include "dog.h"
#include <stdio.h>
/**
 *print_dog - prints dog
 *@d: pointer to dog
 *
 */

void print_dog(struct dog *d)
{
	char *name = d->name;
	char *owner = d->owner;
	int age = d->age;

	if (name == NULL)
		name = "(nil)";
	if (owner == NULL)
		owner = "(nil)";

	if (d)
	{
		printf("name: %s\nAge: %d\nOwner :%s\n", name, age, owner);
	}
}
