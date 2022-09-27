#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any set of bytes
 * @s: the string to search
 * @accept: string containing the bytes to look for
 * Return: p[ointer to the byte in s that matches on of the bytes in accept
 * or NULL if the byte is not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s == accept[j])
		{
			return (s);
		}
	}
	s++;
}
return (NULL);
}
