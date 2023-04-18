#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a structure for a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 *
 * Description: this is a structure that contains 3 elements of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
