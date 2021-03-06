#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array
 * @min: int
 * @max: int
 *
 * Return: nothing
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	arr = malloc(len * (sizeof(int)));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		arr[i] = min + i;
	return (arr);
}
