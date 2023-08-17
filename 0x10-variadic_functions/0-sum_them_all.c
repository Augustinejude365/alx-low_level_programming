#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - A function that returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variabic number of parameters to calculate the sum of.
 * JA codes.
 * Return: 0, if n == 0.
 * Otherwise the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int k, sum = 0;

	va_start(ap, n);

	for (k = 0; k < n; k++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
