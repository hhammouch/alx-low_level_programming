#include <stdio.h>

/**
* main - comb chi t5rbi9a
* Return: zero
*/

int main(void)
{
	int f, t, l;

	f = '0';
	while (f <= '7')
	{
		t = f + 1;
		while (t <= '8')
		{
			l = t + 1;
			while (l <= '9')
			{
				putchar(f);
				putchar(t);
				putchar(l);
				if (f != '7' || t != '8' || l != '9')
				{
					putchar(',');
					putchar(' ');
				}
				l++;
			}
			t++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
