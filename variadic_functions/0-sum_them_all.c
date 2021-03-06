#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all arguments
 *
 * @n: elements to sum
 * Return: result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	unsigned int i;
	va_list ap;

	va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			res += va_arg(ap, unsigned int);
		}
	va_end(ap);
	return (res);
}
