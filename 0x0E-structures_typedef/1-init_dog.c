#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable for the typeof dog struct
 * @d: pointer to struct
 * @age: secondmember member
 * @name: first member
 * @owner: third member
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
