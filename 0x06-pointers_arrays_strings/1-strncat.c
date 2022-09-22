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
	int i = 0, dest_len = 0;

	while (dest[i])
		dest_len++;

	for (i = 0, src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
