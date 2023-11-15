#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NEW_LINE printf("\n")
/**
 * commaChecker - checks if comma are needed
 * @word: needed parameter
 * @n: index to check
 *
 * Return: the needed string
 */
char *commaChecker(const char * const word, int n)
{
	char *comma = ", ";
	char *empty = "";

	switch (word[(n + 1)])
	{
		case '\0':
			return (empty);
		default:
			return (comma);
	}
}
/**
 * nulVerify - verify if the src is null
 * @src: string to check
 *
 * Return: nil in case of null or src otherwise
 */
char *nulVerify(char *src)
{
	char *new;

	if (src == NULL)
	{
		new = strdup("(nil)");
		return (new);
	}
	return (src);
}
/**
* print_all - prints anything, recive in the arguments
* @format: type of the arguments
*
* Return: void, doesnt return
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, *toFree;

	if (format != NULL)
	{
		va_start(args, format);
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
						printf("%c%s", (char)va_arg(args, int), commaChecker(format, i));
						break;
				case 'i':
						printf("%d%s", va_arg(args, int), commaChecker(format, i));
						break;
				case 'f':
						printf("%f%s", va_arg(args, double), commaChecker(format, i));
						break;
				case 's':
						str = va_arg(args, char*);
						toFree = nulVerify(str);
						printf("%s%s", toFree, commaChecker(format, i));
						free(toFree);
						break;
				default:
						break;
			}
			i++;
		}
		va_end(args);
	}
	NEW_LINE;
}
