#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: pointer to struct dog type
 * @name: name
 * @age: age
 * owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *_dog;

	_dog = malloc(sizeof(struct dog));
	if (_dog == NULL)
		_dog = NULL;

	_dog = d;
	_dog->name = name;
	_dog->age = age;
	_dog->owner = owner;
}