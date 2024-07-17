#include <stdio.h>

/**
 *  * main - assign a random number to the variable
 *   * Return: zero
 *    */

int main(void)
{
	char n;

	n = '0';

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
