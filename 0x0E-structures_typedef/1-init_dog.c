#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: pointer to struct dog type
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *_dog;

	(void)d;
	_dog = malloc(sizeof(struct dog));
	if (_dog == NULL)
		_dog = (NULL);
	else
	{
		_dog->name = name;
		_dog->age = age;
		_dog->owner = owner;
	}
}
