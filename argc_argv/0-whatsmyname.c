#include "main.h"
#include <stdio.h>
/**
* main - it starts the program
* @argc: argument count
* @argv: argument vector
* Description - prints the name of the file
* Return: 0 if the function finish propertly
*/
int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	printf("%s\n", argv[0]);
	return (0);
}
