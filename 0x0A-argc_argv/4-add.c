#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int string_digit(char *s);
/**
  * main - program that adds positive numbers
  * @argc: number of command line arguments
  * @argv: array of string
  * Return: always 0
  */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (string_digit(argv[i]))
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
/**
  * string_digit -  checks if a string consists only of digits
  * @s: pointer to string
  * Return: 1 if all string is digits otherwise 0
  */
int string_digit(char *s)
{
	int i, c = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!((s[i] >= 48) && (s[i] <= 57)))
		{
			c = c * 0;
		}
	}
	return (c);
}
