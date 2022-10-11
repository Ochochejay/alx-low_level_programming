#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: A pointer to a new dog or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int i, n;

	if (name == NULL || owner == NULL)
		return (NULL);

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	for (n = 0; name[n]; n++)
		;
	n_dog->name = malloc(sizeof(char) * (++n));
	if (n_dog->name == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		n_dog->name[i] = name[i];

	n_dog->age = age;

	for (n = 0; owner[n]; n++)
		;
	n_dog->owner = malloc(sizeof(char) * (++n));
	if (n_dog->owner == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		n_dog->owner[n] = owner[n];

	return (n_dog);
}
