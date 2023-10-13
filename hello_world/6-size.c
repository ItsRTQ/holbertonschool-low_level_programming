#include <stdio.h>
/**
 * main - this is the function starts the program
 *
 * Description - this program will tell you the size of the different types
 * Return: return 0, basically void or nothing
 */
int main(void)
{
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of long: %zu bytes\n", sizeof(long));
	printf("Size of long long: %zu bytes\n", sizeof(long long));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(double));
	printf("Size of pointer: %zu bytes\n", sizeof(void *));
	return (0);
}
