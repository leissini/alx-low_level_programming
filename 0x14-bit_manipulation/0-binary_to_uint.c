#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more
 * char in string b.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		n <<= 1;
		if (*b == '1')
		{
			n = n + 1;
		}
		b++;
	}
	return (n);
}
