#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - determines if the number is positive, negative or zero
 *
 * Return: Always return 0 if success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is Zero\n", n);
	} else
	{
		printf("%d is Negative\n", n);
	}

	return (0);
}
