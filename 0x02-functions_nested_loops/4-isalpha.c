#include "main.h"
/**
 * _isalpha - A function to check if c is a letter,either lowercase or
 * uppercase
 * @c: this is the int that we are using for the argument in the function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
