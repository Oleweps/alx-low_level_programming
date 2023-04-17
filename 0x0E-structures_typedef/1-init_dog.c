#include "dog.h"
#include <stdlib.h>

/**
  *init_dog - it initializes a variale of type struct dog
  *@name: the name to initialize
  *@age: age to initialize
  *@owner: owner to initiatilize
  *@d: pointer to struct dog to initialize
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
