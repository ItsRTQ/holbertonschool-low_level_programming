#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - it starts the program
* @name: name to print
* @f: is a function pointer, will recive the function address
* Description - does callback of the recive function
* Return: void, doesnt return
*/
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
