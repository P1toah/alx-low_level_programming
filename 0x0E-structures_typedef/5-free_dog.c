#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - free space allocated to dog
 *@d: the sog to be freed
 *
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
