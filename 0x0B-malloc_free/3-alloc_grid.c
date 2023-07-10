#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: dimension of 2D array
  * @height: dimension of 2D array
  * Return: pointer of 2D array of int
  */
int **alloc_grid(int width, int height)
{
	int i, j, k, **dm;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	dm = malloc(sizeof(int *) * height);
	if (dm == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		dm[i] = malloc(sizeof(int) * width);
		if (dm[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(dm[j]);
			}
			free(dm);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			dm[i][k] = 0;
		}
	}
	return (dm);
}
