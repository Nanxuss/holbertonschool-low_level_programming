#include "main.h"

/**
 * print_alphabet - writes a certain string to stdout
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
