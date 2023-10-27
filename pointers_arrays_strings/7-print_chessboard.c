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

	for (y = 0; y < 8; y++)
	{
		for (x = 0; x < 8; x++)
		{
			printf("%c", a[y][x]);
		}
		printf("\n");
	}
}
