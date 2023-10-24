#include "main.h"
/**
* _puts - it starts the program
* @str: recive a value
* Description - this function mimics the puts function
* Return: void, doesnt return
*/
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
