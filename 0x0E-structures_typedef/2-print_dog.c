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
	double age = d->age;

	if (name == NULL)
		name = "(nil)";
	if (owner == NULL)
		owner = "(nil)";

	if (d)
	{
		printf("name: %s\nAge: %f\nOwner :%s\n", name, age, owner);
	}
}
