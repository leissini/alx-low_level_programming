#include <stdlib.h>
#include "main.h"
/**
  * argstostr - concatenates all the arguments of the program into string
  * @ac: argument counter
  * @av: argument value
  * Return: pointer to a string
  */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *new;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			l++;
		}
		l++;
	}
	new = malloc(sizeof(char) * (l + 1));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			new[k] = av[i][j];
			j++;
			k++;
		}
		new[k] = '\n';
		k++;
	}
	new[k] = '\0';
	return (new);
}
