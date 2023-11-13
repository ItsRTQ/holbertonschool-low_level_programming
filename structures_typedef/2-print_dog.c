#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_dog - it starts the program
* @d: recive a value
* Description - prints a struct
* Return: void, doesnt return
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	if (d->age != -1.0)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Age: (nil)");
	}
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
