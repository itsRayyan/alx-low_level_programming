#include <stdlib.h>
#include <stdio.h>
/**
 * main - alphabets
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
