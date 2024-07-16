#include <stdio.h>

/**
 * main - print alpha kbir o s4ir
 * Return: zero
 */

int main(void)
{
	char low;
	char cap;

	low = 'a';
	cap = 'A';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	while (cap <= 'Z')
	{
		putchar(cap);
		++cap;
	}
	putchar('\n');

	return (0);
}
