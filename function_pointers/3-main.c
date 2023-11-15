#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ZRO(x, y) ((x) == 0 || (y) == 0)
/**
* main - it starts the program
* @argv: argument vector
* @argc: argument count
* Description - does simple arithmetics
* Return: 0, when the main finish propertly
*/
int main(int argc, char *argv[])
{
	int n1, n2;
	int (*calc)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	operator = argv[2];
	if (ZRO(n1, n2) && (strcmp(operator, "/") == 0 || strcmp(operator, "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	calc = get_op_func(operator);
	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", calc(n1, n2));
	return (0);
}
