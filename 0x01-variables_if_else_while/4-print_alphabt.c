#include <stdlib.h>
#include <stdio.h>
/**
 * main - alphabets
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
