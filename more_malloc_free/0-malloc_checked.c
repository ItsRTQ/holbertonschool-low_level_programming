#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - it starts the program
* @b: recive a value
* Description - this function checks if malloc fails
* Return: void, doesnt return
*/
void *malloc_checked(unsigned int b)
{
	void *point = malloc(b);

	if (point == NULL)
	{
		exit(98);
	}
	return (point);
}
