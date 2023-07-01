#include <stdio.h>

/**
 * main - prints the alphabets
 *
 * Return: always (0) if success
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
