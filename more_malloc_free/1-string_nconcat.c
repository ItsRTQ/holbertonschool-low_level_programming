#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - it starts the program
* @s1: recive a value
* @s2: parameter recive
* @n: bytes to target
* Description - concatenate s1 to n bytes of s2
* Return: pointer to the newly allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size = (strlen(s1) + strlen(s2) + 1);
	concat = malloc(sizeof(char) * size);
	if (concat == NULL)
	{
		return (NULL);
	}
	if (n >= strlen(s2))
	{
		strcpy(concat, s1);
		strcat(concat, s2);
		return (concat);
	}
	else
	{
		strcpy(concat, s1);
		strncat(concat, s2, n);
		return (concat);
	}
}
