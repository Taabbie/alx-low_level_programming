#include  <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main -program will print the last digit of a random number
 *
 *  Return: Always 0 (success/correct)
 */

int main(void)
{
	int n;

<<<<<<< HEAD
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);						
        if (n % 10 > 5) 
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 < 6 && n % 10 != 0)
=======
srand(time(0));
n=rand() - RAND_MAX / 2;

	printf ("Last digit of %d is %d", n, n % 10);

If(n % 10 > 5)
{
printf ("and is greater than 5\n");
}
else if(n % 10 == 0)
{
printf("and is 0\n");
}
else if(n % 10 < 6 && n % 10 != 0)
{
>>>>>>> 8216d07d6b110bb723babd2159c494857b15013f
		printf("and is less than 6 and not 0\n");
	return (0);
