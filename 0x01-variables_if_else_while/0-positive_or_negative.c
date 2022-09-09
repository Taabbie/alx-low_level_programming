/*
 *  Task 0 Positive anything is better than negative nothing
 *
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program determines whether a random number is positive, 
 * Negative, or zero
 *
 * Return : Always (0) (success/correct)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
return (0); 
}
