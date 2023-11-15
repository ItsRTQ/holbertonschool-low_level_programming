#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
* print_numbers - prints all the recive arguments separated
* @separator: recive a value
* @n: amount of arguments
*
* Return: void, doesnt return
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int num;

	if (separator == NULL)
	{
		i = n;
	}
	if (n == 0)
	{
		return;
	}
	va_start(args, n);
	for (; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
