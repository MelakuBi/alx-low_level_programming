#include <stdio.h>
/**
 *main - program starts here
 *Description: this program description
 *putchar: to accept characters
 *Return: always return success
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int i = 1;

	for (a = '0'; a <= '9'; a++)
{
	for (b = '0'; b <= '9'; b++)
{
	for (c = a; c <= '9'; c++)
{
	d = b + 1;
	for (d = d; d <= '9'; d++)
{
	i++;
	putchar(a);
	putchar(b);
	putchar(' ');
	putchar(c);
	putchar(d);
/*	if (a <= '9' && b <= '9' && c <= '9' && d <= '8') */
	if (i <= 2474)
	{
	putchar(',');
	putchar(' ');
	}
}
}
}
}
	putchar('\n');
	return (0);
}
