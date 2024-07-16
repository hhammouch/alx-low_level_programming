#include <unistd.h>
/**
 * main - n9ez wa7d joj d char e and q
 * Return: zero
 */
int main(void)
{
	char n;

	n = '0';

	while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
	write(1, "\n", 1);

	return (0);
}
