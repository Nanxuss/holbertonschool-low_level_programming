#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print all arguments
 *
 * @f: elements to print
 * Return: nothing
 */

void print_all(const char * const f, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *stcpy;

	va_start(ap, f);
		while ((f != NULL) && (f[i] != '\0'))
		{
			switch (f[i])
			{
				case 'c':
					printf("%c", (va_arg(ap, int)));
					break;
				case 'f':
					printf("%f", (va_arg(ap, double)));
					break;
				case 's':
					stcpy = (va_arg(ap, char *));
					if (stcpy == NULL)
					{
						printf("(nil)");
						break;
					}
					printf("%s", stcpy);
					break;
				case 'i':
					printf("%d", (va_arg(ap, int)));
					break;
				default:
					i++;
					continue;
			}
			if (f[i + 1] != '\0')
				printf(", ");
			i++;
		}
	va_end(ap);

	printf("\n");
}
