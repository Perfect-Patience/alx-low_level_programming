#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - frees instance of structure dog
 *@d: pointer to instance of dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
