#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: the variable
 * @name: passed arguement to member name
 * @age: passed arguement to member age
 * @owner: passed arguement to member owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d = { *name, age, *owner };
}
