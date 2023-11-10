#include "main.h"
#include <stdlib.h>
/**
* _calloc - it starts the program
* @nmemb: recive a value
* @size: recive value
* Description - this function allocates memory set to 0
* Return: a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *newPtr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	newPtr = malloc(size * nmemb);
	if (newPtr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
	{
		((char *)newPtr)[i] = 0;
	}
	return (newPtr);
}
