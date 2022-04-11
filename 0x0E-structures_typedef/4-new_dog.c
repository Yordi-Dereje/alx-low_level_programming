#include <stdio.h>
#include "dog.h"
/**
 * new_dog - a function that creates a new dog
 * @name: attribute 1
 * @age: attribute 2
 * @owner: attribute 3
 * Return: update the structure or null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i;
	char *name_malloc;
	char *owner_malloc;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; )
		i++;
	name_malloc = malloc(sizeof(char) * (i + 1));
	if (name_malloc == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; owner[i] !- '\0'; )
		i++;
	owner_malloc = malloc(sizeof(char) * (i + 1));
	if (owner_malloc == NULL)
	{
		free(name_malloc);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		name_malloc[i] = name[i];
	name_malloc[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		owner_malloc[i] = owner[i];
	owner_malloc[i] = '\0';

	(*new_dog).name = name_malloc;
	(*new_dog).age = age;
	(*new_dog).owner = owner_malloc;
	return (new_dog);
}
