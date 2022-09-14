#include <stdio.h>

/**
 * main-A function that prints the first 50 Fibonacci
 * numbers starting from 1 and 2
 * followed by a new line
 * Return: Always 0 (success
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1; 1 <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
