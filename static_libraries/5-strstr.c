#include "main.h"
#include <stddef.h>
#include "2-strlen.c"
/**
* *_strstr - it starts the program
* @haystack: recive a value
* @needle: recive value
* Description - locates a substring
* Return: pointer to the beginning of the located substrin
*/
char *_strstr(char *haystack, char *needle)
{
	char *ptr;
	int a, b, temp, Size = _strlen(needle);

	ptr = NULL;
	if (Size == 0)
	{
		ptr = haystack;
		return (ptr);
	}
	for (a = 0; haystack[a] != '\0'; a++)
	{
		if (haystack[a] == needle[0])
		{
			for (b = 1; needle[b] != '\0'; b++)
			{
				temp = (a + b);
				if (needle[b] != haystack[temp])
				{
					break;
				}
			}
			if (b == Size)
			{
				ptr = &haystack[a];
				return (ptr);
			}
		}
	}
	return (ptr);
}
