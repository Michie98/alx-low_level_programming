#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array
 * @size: unsigned int size of array
 * @c: array of charachter
 *
 * Return: 0 if successful or null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *)malloc(size * sizeof(char));

	while (arr == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
