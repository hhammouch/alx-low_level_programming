#include <stdio.h>

/**
 * main - n9ez wa7d joj d char e and q
 * Return: zero
 */

int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 101 && alpha != 113)
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
