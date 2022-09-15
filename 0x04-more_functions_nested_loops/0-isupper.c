#include "main.h"

/**
 * _isupper - checks for upper case in letters
 * @c: integer to be checked
 * Return: 1 for upper or 0 for any other case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
