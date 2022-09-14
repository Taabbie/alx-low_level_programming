#include <stdio.h>

#include "main.h"

/**
 * print_to_98 - A function that prints all natural numbers
 * from n to 98 followed by a new line
 * @n: the number to start printing from
 */
void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d", i);
		}
		printf("\n");
	}
	else if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
			printf("%d", j);
		}
		printf("\n");
	}
}
