#include "main.h"
#include <stdio.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements of the array
 * @size: size in bytes of the elements
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p
	unsigned int i, j;

	j = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(j);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		p[i] = 0;
	return (p);
}
