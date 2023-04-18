#include "dog.h"

/**
 * init_dog - a function that initializes a struct dog with
 * provided values
 * @d: a pointer to struct dog to be initialized
 * @name: a pointer to char array for name of dog
 * @age: age of the dog
 * @owner: a pointer to char array for owner of dog
 *
 * Return: a void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
