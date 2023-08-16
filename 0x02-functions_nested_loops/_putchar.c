#include <unistd.h>
/*
 * _putchar - writes characters
 * Return: 1 On success, -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
