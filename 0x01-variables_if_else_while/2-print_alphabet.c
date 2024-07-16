#include <stdio.h>

/**
 * main - print alpha
 * Return: zero
 */

int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		++alpha;
	}
	putchar('\n');

	return (0);
}
