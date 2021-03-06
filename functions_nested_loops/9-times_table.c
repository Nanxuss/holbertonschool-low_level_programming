#include "main.h"

/**
 * times_table - prints a multiplication table
 *
 * Return: nothing
 */

void times_table(void)
{
	int num, mult;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			if (mult != 9)
			{
				if ((num * mult) <= 9)
				{
					_putchar(num * mult + '0');
					_putchar(44);
					_putchar(32);
					if ((num * (mult + 1) <= 9))
						_putchar(32);
				}
				else
				{
					_putchar(((num * mult) / 10) + '0');
					_putchar(((num * mult) % 10) + '0');
					_putchar(44);
					_putchar(32);
				}
			}
			else
			{
				if ((num * mult) <= 9)
				{
					_putchar(num * mult + '0');
					_putchar(10);
				}
				else
				{
					_putchar(((num * mult) / 10) + '0');
					_putchar(((num * mult) % 10) + '0');
					_putchar(10);
				}
			}
		}
	}
}

