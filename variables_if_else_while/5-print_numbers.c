#include <stdio.h>
/**
 * main - starts program
 * Description - prints numbers from 0 to 9
 * Return: 0 if the function finish correctly
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%u", a);
	}
	printf("\n");
	return (0);
}
