#include "main.h"

/**
 * _strspn - gets the length of a prefix substringsubstring
 * @s: the string to evaluate
 * @accept: the string containing the list of characters to match in s
 *
 * Return: the number opf bytes in the initial segment
 * of s which consist only of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[j])
		{
			f++;
			flag = 1;
		}
	}
	if (flag == 0)
	{
		return (f);
	}
}
