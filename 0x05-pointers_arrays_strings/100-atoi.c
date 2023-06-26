#include "main.h"
/**
  * _atoi - convert a string to an integer
  * @s: the pointer to convert
  * Return: an integer
  */
int _atoi(char *s)
{
	int i = 0, integer = 0, sign = 1;

	while (!((s[i] >= '0') && (s[i] <= '9')) && (s[i] != '\0'))
	{
		if (s[i] == '-')
		{
			sign = sign * (-1);
		}
		i++;
	}
	while ((s[i] >= '0') && (s[i] <= '9'))
	{
		integer = (integer * 10) + (sign * (s[i] - '0'));
		i++;
	}
	return (integer);
}
