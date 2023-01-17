#include "dog.h"
#include <stdlib.h>
/**
 * int_dog - initialize a variable of struct
 * @d: dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age ;
	d->owner = owner;
}
