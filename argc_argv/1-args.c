#include "main.h"
#include <stdio.h>
/**
* main - it starts the program
* @argc: argument count
* @argv: argument vector
* Description - prints the number of arguments
* Return: 0 if the function finish propertly
*/
int main(int argc, char *argv[])
{
	int i;
	(void)argc;
	(void)argv;

	for (i = 0; i < argc; i++)
	{
	}
	i--;
	printf("%d\n", i);
	return (0);
}
