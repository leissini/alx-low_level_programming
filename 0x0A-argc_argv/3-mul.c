#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - program that multiplies two numbers
  * @argc: number of command line arguments
  * @argv: array of string
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
