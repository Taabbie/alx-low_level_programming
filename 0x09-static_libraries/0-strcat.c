#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * overwritting the terminating null byte ('\0') at the end
 * of dest, then adds a terminating null byte
 * @src: string to be concatenated upon
 * @dest: string to be appended
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
