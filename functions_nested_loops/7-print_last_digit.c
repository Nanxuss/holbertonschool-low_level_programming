#include "main.h"

/**
 * print_last_digit - returns last digit of a certain number
 * @n: number
 *
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int ld = n % 10;
	_putchar('0' + ld);
	return (ld);
}
