#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
