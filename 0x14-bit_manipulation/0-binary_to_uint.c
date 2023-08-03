#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned integer.
 * @b: string of the binary number
 *
 * Return: res the decimal number.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		res = 2 * res + (b[i] - '0');
	}

	return (res);
}
