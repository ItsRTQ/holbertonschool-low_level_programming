#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - verify the last digit of a number
 * Description - checks if the last digit is 0 or something else
 * Return: 0 if the fuction finish crrectly
 */
int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	b = n % 10;
	if (b > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, b);
	} else if (b != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, b);
	}
	else
	{
		printf("Last digit of %d is %d and is 0", n, b);
	}
	return (0);
}
