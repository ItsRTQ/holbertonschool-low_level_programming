#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* new_dog - it starts the program
* @name: recive a value
* @age: value
* @owner: value
* Description - creates a new dog struct
* Return: a structure dog struct, or null if fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Doggy;
	char *name_copy, *owner_copy;

	if (name == NULL || owner == NULL)
		return (NULL);
	name_copy = strdup(name);
	owner_copy = strdup(owner);
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy);
		name_copy = NULL;
		free(owner_copy);
		owner_copy = NULL;
		return (NULL);
	}
	Doggy = (dog_t *)malloc(sizeof(dog_t));
	if (Doggy == NULL)
	{
		free(name_copy);
		name_copy = NULL;
		free(owner_copy);
		owner_copy = NULL;
		free(Doggy);
		return (NULL);
	}
	Doggy->name = name_copy;
	Doggy->owner = owner_copy;
	Doggy->age = age;
	return (Doggy);
}
