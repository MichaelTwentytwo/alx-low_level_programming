#include <stdio.h>

/**
 * main - prints the alphabets
 *
 * Return: always (0) if success
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');


	return (0);
}
