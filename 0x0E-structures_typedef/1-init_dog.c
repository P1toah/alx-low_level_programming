#include <stdio.h>
#include "dog.h"

/**
 *init_dog - intialize the dogs variable
 *@d: the dogs structure
 *@name: name of the dog
 *@age: dogs age
 *@owner: owner name
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
