#include "main.h"

/**
 * binary_to_uint - convert binary to uint
 *
 * @b: binary
 * Return: uint
 */

unsigned int binary_to_uint(const char *b)
{
	int i = strlen(b);
	unsigned int ret = 0, bit = 1;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] == '1')
			ret += bit;
		else if (b[i] != '0')
			return (0);

		bit = (bit * 2);
		i--;
	}

	return (ret);
}
