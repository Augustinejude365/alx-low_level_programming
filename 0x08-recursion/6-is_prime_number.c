#include "main.h"

int actual_prime(int n, int k);

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: number to be evaluated
 * written by jude
 * Return: 1 if n is a prime number, 0 if is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to be evaluated
 * @k: iteration.
 * *
 * Return: 1 if n is prime, 0 if its not.
 */
int actual_prime(int n, int k)
{
	if (k == 1)
		return (1);
	if (n % k == 0 && k > 0)
		return (0);
	return (actual_prime(n, k - 1));
}
