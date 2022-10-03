#include "main.h"

/**
 * _strncat - concatenates n bytes of a string to another
 * @dest: the destination string
 * @src: the source string
 *@n: the number of bytes of src to concatenate
 *
 * Return: new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
