#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: the array
 * @n: number of array elements
 */
void reverse_array(int *a, int n)
{
	int temp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
