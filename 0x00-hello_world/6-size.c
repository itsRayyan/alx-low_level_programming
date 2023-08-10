#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
int num;
long l;
long long ll;
float f;
printf("Size of a char: %d byte(s)\nSize of an int: %d byte(s)", sizeof(ch), sizeof(num));
printf("\nSize of a long int: %d byte(s)\nSize of a long long int: %d byte(s)", sizeof(l), sizeof(ll));
printf("\nSize of a float: %d byte(s)\n", sizeof(f));
return (0);
}
