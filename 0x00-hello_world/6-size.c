#include <stdio.h>

/**
 * main - contains the main function
 * Printf - prints the sizeof
 * Return: always (0)
 */

int main(void)
{

	printf("size of int is: %lu bytes\n", sizeof(int));
	printf("size of char is: %lu bytes\n", sizeof(char));
	printf("size of long int is: %lu bytes\n", sizeof(long int));
	printf("size of long long int is: %lu bytes\n", sizeof(long long int));
	printf("size of float is: %lu bytes\n", sizeof(float));

	return (0);
}
