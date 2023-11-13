#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void freeAll(dog_t *me);
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
	{
		free(Doggy);
		return (NULL);
	}
	Doggy->name = strdup(name);
	Doggy->owner = strdup(owner);
	if (Doggy->name == NULL || Doggy->owner == NULL || Doggy == NULL)
	{
		freeAll(Doggy);
		return (NULL);
	}
	Doggy->age = age;
	return (Doggy);
}
/**
 * freeAll - free the structure dog
 * @me: recive the struct
 * Description - frees everything inside the struct and the struct
 * Return: is void, doesnt return
 */
void freeAll(dog_t *me)
{
	free(me->name);
	free(me->owner);
	free(me);
}
