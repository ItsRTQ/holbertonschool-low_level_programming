#include "main.h"
#include <stdio.h>
/**
* print_chessboard - it starts the program
* @a: recive a value
* Description - prints a chess board
* Return: void, doesnt return
*/
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (y = 0; a[y][0] != '\0'; y++)
	{
		for (x = 0; a[y][x] != '\0'; x++)
		{
			printf("%c", a[y][x]);
		}
		printf("\n");
	}
}
