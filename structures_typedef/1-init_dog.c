#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* init_dog - it starts the program
* @d: structure recive
* @name: parameter recive
* @age: recive value
* @owner: recive value
* Description - this function initialize a variable type struct
* Return: void, doesnt return
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
