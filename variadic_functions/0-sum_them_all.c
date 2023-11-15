#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sums all recive arguments
* @n: recive a value
*
* Return: int thats the sum of all numes recive
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x = 0;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		x += va_arg(args, int);
	}
	va_end(args);
	return (x);
}
