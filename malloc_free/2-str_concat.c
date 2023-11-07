#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
* str_concat - it starts the program
* @s1: recive a value
* @s2: second value
* Description - concatenate 2 strings
* Return: a pointer to the newly allocated space in memory
*/
char *str_concat(char *s1, char *s2)
{
	char *newStr;
	int size = (strlen(s1) + strlen(s2));
	int i, b;

	newStr = malloc(sizeof(char) * (size + 1));
	if (newStr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		if (s1[i] == '\0')
		{
			break;
		}
		newStr[i] = s1[i];
	}
	for (b = 0; b < size; b++)
	{
		if (s2[b] == '\0')
		{
			break;
		}
		newStr[i] = s2[b];
		i++;
	}
	return (newStr);
}
