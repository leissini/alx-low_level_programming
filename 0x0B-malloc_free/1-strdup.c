#include "main.h"
#include <stdlib.h>
/**
  * _strdup - duplicate to new memory space location
  * @str: pointer to a string
  *
  * Return: pointer to a string
  */
char *_strdup(char *str)
{
	int i, l;
	char *new;

	if (str == NULL)
	{
		return (NULL);
	}
	for (l = 0; str[l] != '\0'; l++)
	{
	}
	new = malloc(sizeof(char) * (l + 1));
	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= l; i++)
	{
		new[i] = str[i];
	}
	return (new);
}
