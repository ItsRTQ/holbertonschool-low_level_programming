#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - starts the program
 * Description - checks if n is positive or negative
 * Return: 0 if the main finish correctly
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 0)
	{
		if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%d is positive\n", n);
		}
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
