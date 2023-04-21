#include "main.h"
#include <string.h>
/*
 * init_dog - intialise structure
 *
 *@d: array
 *@name: name
 *@age: age
 *@owner: owner
 *
 * 
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
