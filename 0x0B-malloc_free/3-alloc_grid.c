#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2D array
 * @width: colomns
 * @height: rows
 * Return: pointer to 2 arrays
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		printf("can't allcote");
		return (NULL);
	}

	if (array == 0)
	{
		return (NULL);
	}
		for (i = 0; i < height; i++)
		{
			array[i] = malloc(sizeof(int) * width);
			if (array[i] == 0)
			{
				for (i = i; i >= 0; i--)
				{
					free(array[i]);
				}
				free(array);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				array[i][j] = 0;
			}
		}
		return (array);
}
