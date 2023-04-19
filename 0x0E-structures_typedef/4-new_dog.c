#include <stdlib.h>
#include "dog.h"

/**
 * _stringlength - a function that returns the
 * length of a string
 * @str: the string to evaluate
 *
 * Return: the length of the string
 */

int _stringlength(char *str)
{
	int a;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	return (a);
}

/**
 * *_stringcopy - a function that copies the
 * string pointed to by src
 * that also include the null byte (\0)
 * @p: a pointer to the buffer where we copy the string
 * @st: the string to be copied
 *
 * Return: the pointer to p
 */

char *_stringcopy(char *p, char *st)
{
	int l, b;

	l = 0;

	while (st[l] != '\0')
	{
		l++;
	}

	for (b = 0; b < l; b++)
	{
		p[b] = st[b];
	}
	p[b] = '\0';

	return (p);
}

/**
 * new_dog - a function that create a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the new dog (Success),
 * NULL if someting else is returned
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _stringlength(name);
	l2 = _stringlength(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_stringcopy(dog->name, name);
	_stringcopy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
