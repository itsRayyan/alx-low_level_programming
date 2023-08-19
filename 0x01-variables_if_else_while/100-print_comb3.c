#include <stdlib.h>
#include <stdio.h>
/**
 * main - alphabets
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int ch, ch2;

	for (ch = '0'; ch <= '9'; ch++)
	{
		for (ch2 = ch + 1; ch2 <= '9'; ch2++)
		{
			putchar(ch);
			putchar(ch2);
			if (ch != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
