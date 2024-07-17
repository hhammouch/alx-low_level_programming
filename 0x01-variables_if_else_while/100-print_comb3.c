#include <stdio.h>

/**
 * main - comb chi t5rbi9a
 * Return: zero
 */

int main(void)
{
	int n;
	int t;

	n = 0 + '0';

	while (n <= '8')
	{
		t = n + 1;
		while (t <= '9')
		{
			if (t > n)
			{
				putchar(n);
				putchar(t);
				if (n != '8' || t != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			t++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
