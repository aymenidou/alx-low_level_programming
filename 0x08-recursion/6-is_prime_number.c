#include "main.h"

/**
 * prime_check - test to find number if prime
 * @n: input int
 * @x: input int
 * Return: 1 if found 0 if not
 */
int prime_check(int n, int x)
{
	if (n == x)
	{
		return (1);
	}
	if (n % x == 0)
	{
		/**
		 * we found a divisor so n isn't prime
		 */
		return (0);
	}
	return (prime_check(n, x + 1));
}
/**
 * is_prime_number - check if number is a prime number
 * @n: input int
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
	{
		return (0);
	}
	return (prime_check(n, 2));
}
