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

	Doggy = malloc(sizeof(dog_t));
	if (Doggy == NULL)
		return (NULL);
	Doggy->name = strdup(name);
	if (Doggy->name == NULL)
	{
		free(Doggy);
		return (NULL);
	}
	Doggy->owner = strdup(owner);
	if (Doggy->owner == NULL)
	{
		free(Doggy->name);
		free(Doggy);
		return (NULL);
	}
	Doggy->age = age;
	return (Doggy);
}
