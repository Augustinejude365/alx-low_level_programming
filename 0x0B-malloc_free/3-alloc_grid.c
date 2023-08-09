#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers
 * @width: width input
 * @height: height input
 * JA codes
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **joe;

	int j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	joe = malloc(sizeof(int *) * height);

	if (joe == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		joe[j] = malloc(sizeof(int) * width);

		if (joe[j] == NULL)
		{
			for (; j >= 0; j--)
				free(joe[j]);
			free(joe);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			joe[j][k] = 0;
	}
	return (joe);
}


