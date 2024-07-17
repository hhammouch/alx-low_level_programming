#include <stdio.h>

/**
 * main - comb chi t5rbi9a
 * Return: zero
 */

int main(void)
{
	int n;

	n = 0 + '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
