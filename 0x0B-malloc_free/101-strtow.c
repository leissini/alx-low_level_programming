#include <stdlib.h>
#include "main.h"
/**
  * strtow - splits a string into words
  * @str: input string
  * Return: number of words
  */
char **strtow(char *str)
{
	int i, j, k, l, a, b, count;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0, l = 0, count = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
		l++;
	}
	if (count == 0)
		return (NULL);
	words = (char **)malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0, count = 0; i < l; i++)
	{
		if ((str[i] != ' ' && (i == 0 || str[i - 1] == ' ')))
		{
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				words[count] = (char *)malloc((j - i + 1) * sizeof(char));
			if (words[count] == NULL)
			{
				for (k = 0; k < count; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			for (a = i, b = 0; a < j; a++, b++)
			{
				words[count][b] = str[a];
			}
			words[count][j - i] = '\0';
			count++;
			i = j;
		}
	}
	words[count] = NULL;
	return (words);
}
