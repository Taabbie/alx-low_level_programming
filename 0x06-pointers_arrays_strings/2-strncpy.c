#include "main.h"

/**
 * _strncpy - copies a string including the terminating
 * null byte, using at mkst an inputted number of bytes.
 * if the length of the source string string is less than the
 * maximum bytenunber the remainder of the destination
 * string is filled with null byte.
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: maximum number of bytes copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (i = 0; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
