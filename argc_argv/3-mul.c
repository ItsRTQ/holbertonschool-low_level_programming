#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - it starts the program
* @argc: argument count
* @argv: argument vector
* Description - prints the multiplication of two argv with a error prompt
* Return: 0 if the function finish propertly
*/
int main(int argc, char *argv[])
{
	int i, b = 0, num1, num2;

	for (i = 0; i < argc; i++)
	{
		b++;
	}
	if (b != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = strtol(argv[1], NULL, 10);
		num2 = strtol(argv[2], NULL, 10);
		printf("%d\n", (num1 * num2));
	}
	return (0);
}
