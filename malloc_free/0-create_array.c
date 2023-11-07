#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* create_array - it starts the program
* @size: recive a value
* @c: recive value
* Description - creates a array of chars and initialize it with specific char
* Return: a char pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size == 0)
	{
		return (0);
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
