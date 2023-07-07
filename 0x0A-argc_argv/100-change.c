#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints the minimum number of coins
  * @argc: number of arguments
  * @argv: array of string
  * Return: always 0
  */
int main(int argc, char **argv)
{
	int cents, c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
	{
		printf("%d\n", 0);
	}
	else
	{
		c += (cents / 25);
		cents %= 25;
		c += (cents / 10);
		cents %= 10;
		c += (cents / 5);
		cents %= 5;
		c += (cents / 2);
		cents %= 2;
		c += cents;
		printf("%d\n", c);
	}
	return (0);
}
