#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - it starts the program
* @argv: argument vector
* @argc: argument count
* Description - does simple arithmetics
* Return: 0, when the main finish propertly
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*calc)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if ((num1 == 0 || num2 == 0) && (strcmp(operator, "/") == 0 || strcmp(operator, "%") == 0))
	{
		printf("ERROR\n");
		exit(100);
	}
	calc = get_op_func(operator);
	if (calc == NULL)
	{
		printf("ERROR\n");
		exit(99);
	}
	printf("%d\n", calc(num1, num2));
	return (0);
}
