#include <stdio.h>
/**
 * main - main function starts the code
 *
 * Description - check is the number entered is a positivive or negative
 * Return: Thhe fuction return 0 when it finish, letting know it has finish
 */
int checker(int n)
{
	if (n >= 0)
	{
		if (n == 0)
		{
			printf("%d is zero", n);
		}
		else
		{
			printf("%d is positive", n);
		}
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
