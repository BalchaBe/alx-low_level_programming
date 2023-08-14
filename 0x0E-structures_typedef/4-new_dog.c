#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int m, l, n;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (l = 0; name[l]; l++)
		;

	for (n = 0; owner[n]; n++)
		;

	p_dog->name = malloc(l + 1);
	p_dog->owner = malloc(n + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (m = 0; m < l; m++)
		p_dog->name[m] = name[m];
	p_dog->name[m] = '\0';

	p_dog->age = age;

	for (m = 0; m < n; m++)
		p_dog->owner[m] = owner[m];
	p_dog->owner[m] = '\0';

	return (p_dog);
}
