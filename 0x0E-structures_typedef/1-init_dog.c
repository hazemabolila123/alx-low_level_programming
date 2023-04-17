#include "main.h"
#include <stdlib.h>
/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: Function parameter
 * @name: Function parameter
 * @age: Function parameter
 * @owner: Function parameter
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
