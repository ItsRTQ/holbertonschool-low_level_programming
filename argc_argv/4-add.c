#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - it starts the program
* @argc: argument count
* @argv: argument vector
* Description - adds all positivis numbers on the argc argv
* Return: 0 if the function finish propertly
*/
int main(int argc, char *argv[])
{
	int i, b;
	int num = 0;
	int result = 0;
	(void) argc;
	(void) argv;

	for (i = 1; i < argc; i++)
	{
		for (b = 0; argv[i][b] != '\0'; b++)
		{
			if (argv[i][b] < '0' || argv[i][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		num = strtol(argv[i], NULL, 10);
		result = result + num;
	}
	printf("%d\n", result);
	return (0);
}
