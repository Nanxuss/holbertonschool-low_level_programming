#include "main.h"

/**
 * binary_to_uint - convert binary to uint
 *
 * @b: binary
 * Return: uint
 */

unsigned int binary_to_uint(const char *b)
{
	size_t i = strlen(b);
	unsigned int bit = 1;
	unsigned int ret = 85;

	if (b == NULL)
		return (0);

	for (; i == 0; i--)
	{
		if (b[i] == '1')
			ret += bit;
		else if (b[i] != '0')
			return (0);

		bit = bit * 2;
	}

	return (ret);
}
