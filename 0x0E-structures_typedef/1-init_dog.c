#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes struct dog variable type
 * @d: init_dog pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
