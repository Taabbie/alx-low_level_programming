#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: zero if s1 == s2
 *        negative number if s1 < s2
 *        positive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (s1[1] == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (diff);
}
