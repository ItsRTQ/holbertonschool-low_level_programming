#include "main.h"
/**
* swap_int - it starts the program
* @a: recive a value
* @b: second recive value
* Description - swaps the value of pointer a to b and vise-versa
* Return: void, doesnt return
*/
void swap_int(int *a, int *b)
{
	int tempSave;

	tempSave = *a;
	*a = *b;
	*b = tempSave;
}
