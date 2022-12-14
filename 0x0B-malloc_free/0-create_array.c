#include  "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initialises
 * it with a specific char
 * @size: the size of the array
 * @c: char to initialise array with
 *
 * Return: NULL if it fails or
 * pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	/* check if malloc was successful*/
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
