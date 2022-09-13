#include <stdio.h>
/**
 * print_to_98 - This function prints all
 * natural numbers from input to 98,inorder
 * seperated by a comma followed by a space
 * @n: this is the number to begin counting at
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n);
		n++;
		printf("\n");
	}
	else
	{
		while (n < 98)
			printf("%d, ", n);
		n--;
		printf("\n");
	}
}
