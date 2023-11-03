#include "main.h"
/**
* is_prime_number - it starts the program
* @n: number to check
* Description - checks if the number is a prime number
* Return: 1 if it is a prime number otherwise return 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	return (helper_func(n, n - 1));

}
/**
 * helper_func - helps the prime func performe
 * @n: parameter
 * @i: second parameter
 * Description - divides de n value till it finds if its prime or not
 * Return: 1 if prime 0 otherwise
 */
int helper_func(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (helper_func(n, i - 1));
}
