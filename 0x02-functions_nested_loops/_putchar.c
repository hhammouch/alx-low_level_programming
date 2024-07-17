#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes characters
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
