#include "main.h"
#include <stdio.h>
/**
* main - it starts the program
* @argc: argument count
* @argv: argument vector
* Description - prints the recive arguments
* Return: 0 if the function finish propertly
*/
int main(int argc, char *argv[])
{
	int i;
	(void)argc;
	(void)argv;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
