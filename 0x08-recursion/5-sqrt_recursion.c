#include "main.h"

int actual_sqrt_recursion(int n, int t);
/**
 * _sqrt_recursion - a function that returns the natural square
 *  root of a number.
 *  @n: number to calculate the square root of
 *  written by jude
 *  Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural square
 * root of a number
 * @n: number to calculate the actual square root
 * @t: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int t)
{
	if (t * t > n)
		return (-1);
	if (t * t == n)
		return (t);
	return (actual_sqrt_recursion(n, t + 1));
}
