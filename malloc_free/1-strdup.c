#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
* _strdup - it starts the program
* @str: recive a value
* Description - creates a duplicate of the string given
* Return: a pointer to the newly allocated space in memory
*/
char *_strdup(char *str)
{
	char *dupe;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str);
	size++;
	dupe = malloc(sizeof(char) * size);
	if (dupe == NULL)
	{
		return (NULL);
	}
	strcpy(dupe, str);
	return (dupe);
}
