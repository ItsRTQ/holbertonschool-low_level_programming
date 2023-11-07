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
	int size;
	int i = 0, b = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size = (strlen(s1) + strlen(s2) + 1);
	newStr = malloc(sizeof(size));
	if (newStr == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		newStr[i] = s1[i];
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		newStr[i + b] = s2[b];
	}
	return (newStr);
}
