#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog - it starts the program
* @d: recive a value
* Description - frees struct dog
* Return: void, doesnt return
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
