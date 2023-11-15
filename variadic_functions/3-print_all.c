#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
* print_all - prints anything, recive in the arguments
* @format: type of the arguments
*
* Return: void, doesnt return
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, fakeBool;

	if (format == NULL)
		return;
	va_start(args, format);
	while (format[i] != '\0')
	{
		fakeBool = 0;
		switch (format[i])
		{
			case 'c':
				{
					printf("%c", (char)va_arg(args, int));
					break;
				}
			case 'i':
				{
					printf("%d", va_arg(args, int));
					break;
				}
			case 'f':
				{
					printf("%f", va_arg(args, double));
					break;
				}
			case 's':
				{
					printf("%s", va_arg(args, char*));
					break;
				}
			default:
				fakeBool = 1;
		}
		i++;
		if (format[i] != '\0' && fakeBool != 1)
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
