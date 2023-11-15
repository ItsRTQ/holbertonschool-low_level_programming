#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
* print_strings - prints the recives strings
* @separator: recive a value
* @n: amount of arguments
*
* Return: void, doesnt return
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, n);
	for (; i < n; i++)
	{
		str = va_arg(args, char*);
		printf("%s", (str == NULL) ? "(nil)" : str);
		if (i != n - 1)
		{
			printf("%s", (separator == NULL) ? "" : separator);
		}
	}
	printf("\n");
	va_end(args);
}
