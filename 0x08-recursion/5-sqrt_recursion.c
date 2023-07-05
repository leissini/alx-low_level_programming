#include "main.h"
int _sqrt(int i, int n);
/**
  * _sqrt_recursion - the natural square root of a number
  * @n: integer number
  * Return: natural square
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(0, n));
}
/**
  * _sqrt - sqrt of a number
  * @i: int
  * @n: number
  * Return: int
  */
int _sqrt(int i, int n)
{
	if (i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(i + 1, n));
	}
}
